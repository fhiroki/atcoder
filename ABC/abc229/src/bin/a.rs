use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        s1: String,
        s2: String,
    }
    if s1 == "##" || s2 == "##" || s1 == s2 {
        println!("Yes");
    } else {
        println!("No");
    }
}
