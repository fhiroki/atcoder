use proconio::{fastout, input, marker::Chars};

#[fastout]
fn main() {
    input! {
        n: usize,
        s: Chars,
    }
    if s[n - 1] == 'o' {
        println!("Yes");
    } else {
        println!("No");
    }
}
