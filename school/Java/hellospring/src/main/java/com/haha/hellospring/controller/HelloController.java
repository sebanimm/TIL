package com.haha.hellospring.controller;

import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.ResponseBody;

@Controller
public class HelloController {
    @GetMapping("/hello")
    @ResponseBody
    public String hello() {
        return "hello";
    }

    @GetMapping("/hi")
    @ResponseBody
    public String hi() {
        return "hi";
    }

    @GetMapping("/hi/data")
    public String hiData(Model model) {
        model.addAttribute("data", "haha");
        return "hiData";
    }

    // localhost:90/hi/param?data=1234
    @GetMapping("/hi/param")
    public String hiParam(@RequestParam("data") String data, Model model) {
        model.addAttribute("data", data);
        return "hiData";
    }

    @GetMapping("/hello/param")
    @ResponseBody
    public String helloParam(@RequestParam("data") String data) {
        return "hello " + data;
    }

    // 객체 자체를 return
    @GetMapping("/hello/api")
    @ResponseBody
    public Person helloApi() {
        Person person = new Person();
        person.setAge(19);
        person.setName("존슨");
        return person;
    }

    static class Person {
        private int age;
        private String name;

        public int getAge() {
            return age;
        }

        public void setAge(int age) {
            this.age = age;
        }

        public void setName(String name) {
            this.name = name;
        }

        public String getName() {
            return name;
        }
    }
}
