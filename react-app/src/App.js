import { useState, useEffect } from "react";
import styled from 'styled-components';

const StyledBtn = styled.button`
  color: white;
  background-color: black;
`;

const ReStyledBtn = styled(StyledBtn)`
  font-size: 24px;
  color: tomato;
`;

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
      <StyledBtn onClick={onClick}>click me</StyledBtn>
      <br />
      <ReStyledBtn>DON'T click me</ReStyledBtn>
    </div>
  );
}

export default App;
