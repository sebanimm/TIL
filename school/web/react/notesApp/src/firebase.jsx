import { initializeApp } from "firebase/app";
import { getAnalytics, collection } from "firebase/analytics";

const firebaseConfig = {
	apiKey: "AIzaSyCTLq1k0jAWNwAvGoKPwIyo_fBF2TaxWOk",
	authDomain: "notesapp-a10ef.firebaseapp.com",
	projectId: "notesapp-a10ef",
	storageBucket: "notesapp-a10ef.appspot.com",
	messagingSenderId: "506750220589",
	appId: "1:506750220589:web:3b545c6f58fc22591d3ba4",
	measurementId: "G-57B46ZN4VC",
};

const app = initializeApp(firebaseConfig);
const db = getAnalytics(app);
export const notesCollection = collection(db, "notes");
// firebase > app > firestore > collection > doc > value
