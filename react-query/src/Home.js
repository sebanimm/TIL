import React from "react";
import axios from "axios";
import { useQuery, useMutation } from "react-query";

const API_KEY = "3945dd1428d94d0cb836e00bd0a5480d";
const URL = `https://open.neis.go.kr/hub/SchoolSchedule?Key=${API_KEY}&Type=json&pIndex=1&pSize=1&ATPT_OFCDC_SC_CODE=C10&SD_SCHUL_CODE=7150658`;

const fetchAPI = () => {
	return axios.get(URL);
};

const Home = () => {
	const { data, isLoading, isFetching, isError, error } = useQuery("Haha", fetchAPI);
	console.log(data);
	console.log(isLoading);
	console.log(isFetching);
	console.log(isError);
	console.log(error);

	const { mutate } = useMutation(fetchAPI);
	return <div></div>;
};

export default Home;
