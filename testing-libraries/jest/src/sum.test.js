const sum = require("./sum");

test("1 + 2 는 3", () => {
	expect(sum(1, 2)).toBe(3);
});

// .test.js파일에서 바로 테스트하기

// describe("계산 테스트", () => {
// 	const a = 1;
// 	const b = 2;

// 	test("a + b 는 3", () => {
// 		expect(a + b).toBe(3);
// 	});
// });
