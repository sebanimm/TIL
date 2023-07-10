const express = require("express");
const app = express();
const port = 3000;
app.use(express.json());
app.use(express.urlencoded({ extended: false }));

app.get("/", (req, res) => {
	res.send("tlqkf gksDPwns qjfjwlsus");
});

app.get("/req/asdf", (req, res) => {
	const { name, age } = req.query;
	res.send(`${name}님의 나이는 ${age}입니다`);
});

app.get("/api/:name/:age", (req, res) => {
	const { name, age } = req.params;
	res.send(`${name}님의 나이는 ${age}입니다`);
});

app.post("/post", (req, res) => {
	const { name, age } = req.body;
	console.log(req.headers);
	res.send(`${name}님의 나이는 ${age}입니다`);
});

app.listen(port, () => {
	console.log(`Example app listening on port ${port}`);
});
