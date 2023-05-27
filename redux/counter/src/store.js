import { applyMiddleware, createStore } from "redux";
import { createLogger } from "redux-logger";
import thunk from "redux-thunk";

const INCREASE = "INCREASE";
const DECREASE = "DECREASE";

export const increase = () => ({ type: INCREASE });
export const decrease = () => ({ type: DECREASE });

export const increaseAsync = () => (dispatch) => {
	setTimeout(() => {
		dispatch(increase());
	}, 1000);
};
export const decreaseAsync = () => (dispatch) => {
	setTimeout(() => {
		dispatch(decrease());
	}, 1000);
};

const initialState = 0;

function reducer(state = initialState, action) {
	switch (action.type) {
		case INCREASE:
			return state + 1;
		case DECREASE:
			return state - 1;
		default:
			return state;
	}
}

const logger = createLogger();

const store = createStore(reducer, applyMiddleware(thunk, logger));

export default store;
