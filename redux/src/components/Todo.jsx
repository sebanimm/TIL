import React from "react";
import { connect } from "react-redux";
import { deleteTodo } from "../store";

const ToDo = ({ text, handleClick }) => {
	return (
		<p>
			{text} <button onClick={handleClick}>삭제하기</button>
		</p>
	);
};

const mapDispatchToProps = (dispatch, ownProps) => {
	return {
		handleClick: () => dispatch(deleteTodo(ownProps.id)),
	};
};

export default connect(null, mapDispatchToProps)(ToDo);
