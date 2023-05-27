import React from "react";
import { useSelector, useDispatch } from "react-redux";
import { increaseAsync, decreaseAsync } from "./store";

function App() {
	const number = useSelector((state) => state);
	const dispatch = useDispatch();

	const onIncrease = () => {
		dispatch(increaseAsync());
	};
	const onDecrease = () => {
		dispatch(decreaseAsync());
	};

	return (
		<div>
			<h1>state : {number}</h1>
			<button onClick={onIncrease}>+1</button>
			<button onClick={onDecrease}>-1</button>
		</div>
	);
}

export default App;
