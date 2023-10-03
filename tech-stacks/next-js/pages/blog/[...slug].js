import { useRouter } from "next/router";

const BlogPage = () => {
  const router = useRouter();
  const query = router.query;
  console.log(query);

  return (
    <div>
      <h1>catch-all 라우트</h1>
    </div>
  );
};

export default BlogPage;
