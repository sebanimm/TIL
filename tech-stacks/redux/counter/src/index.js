import React from "react";
import ReactDOM from "react-dom/client";
import App from "./App.js";
import { Provider } from "react-redux";
import { all } from "redux-saga/effects";
import { counterSaga } from "./store.js";
import store, { sagaMiddleware } from "./store.js";

function* rootSaga() {
	yield all([counterSaga()]);
}

sagaMiddleware.run(counterSaga);

ReactDOM.createRoot(document.getElementById("root")).render(
	<Provider store={store}>
		<App />
	</Provider>
);
