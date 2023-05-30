import { applyMiddleware, createStore } from "redux";
import { createLogger } from "redux-logger";
import thunk from "redux-thunk";

const ADD = "ADD";
const DELETE = "DELETE";

export const addTodo = (text) => {
	return {
		type: ADD,
		text,
	};
};

export const deleteTodo = (id) => {
	return {
		type: DELETE,
		id: parseInt(id),
	};
};
export const addTodoAsync = () => (dispatch) => {
	setTimeout(() => {
		dispatch(addTodo(), 1000);
	});
};
export const deleteTodoAsync = () => (dispatch) => {
	setTimeout(() => {
		dispatch(deleteTodo(), 1000);
	});
};
const reducer = (state = [], action) => {
	switch (action.type) {
		case ADD:
			return [{ text: action.text, id: Date.now() }, ...state];
		case DELETE:
			return state.filter((toDo) => toDo.id !== action.id);
		default:
			return state;
	}
};

const logger = createLogger();

const store = createStore(reducer, applyMiddleware(logger, thunk));

export default store;
