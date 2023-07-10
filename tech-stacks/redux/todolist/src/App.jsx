import React, { useState } from "react";
import { connect } from "react-redux";
import { addTodo } from "./store";
import Todo from "./components/Todo";

const App = ({ todoLists, addTodo }) => {
	const [text, setText] = useState("");

	const onChange = (e) => {
		setText(e.target.value);
	};

	const onSubmit = (e) => {
		e.preventDefault();
		addTodo(text);
		setText("");
	};

	return (
		<div>
			<h1>내 투두리스트</h1>
			<form onSubmit={onSubmit}>
				<input type="text" value={text} onChange={onChange} />
				<button>추가하기</button>
			</form>
			<div>
				{todoLists.map((todo) => (
					<Todo {...todo} key={todo.id} />
				))}
			</div>
		</div>
	);
};

const mapStateToProps = (state) => {
	return { todoLists: state };
};

const mapDispatchToProps = (dispatch) => {
	return {
		addTodo: (text) => dispatch(addTodo(text)),
	};
};

export default connect(mapStateToProps, mapDispatchToProps)(App);
