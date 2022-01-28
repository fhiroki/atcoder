use proconio::{fastout, input, marker::Chars};

#[fastout]
fn main() {
    input! {
        s: Chars
    }
    if s[0] == s[1] && s[1] == s[2] {
        println!(1);
    } else if s[0] != s[1] && s[1] != s[2] && s[2] != s[0] {
        println!(6);
    } else {
        println!(3);
    }
}
