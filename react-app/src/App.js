import { useState, useEffect } from "react";

function App() {
  const [counter, setValue] = useState(0);
  const [keyword, setKeyword] = useState("");

  const onClick = () => {
    setValue((prev) => prev + 1);
  };

  const onChange = (event) => {
    setKeyword(event.target.value);
  };

  useEffect(() => {
    console.log("once");
  }, []);

  useEffect(() => {
    console.log("keyword changes");
  }, [keyword]);

  useEffect(() => {
    console.log("counter changes");
  }, [counter]);

  useEffect(() => {
    console.log("counter and keyword changes!");
  }, [keyword, counter]);
  
  return (
    <div>
      <input
        value={keyword}
        type="text"
        placeholder="search"
        onChange={onChange}
      ></input>
      <h1>{counter}</h1>
      <button onClick={onClick}>click me</button>
    </div>
  );
}

export default App;
