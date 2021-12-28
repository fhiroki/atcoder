use proconio::{fastout, input, marker::Chars};

#[fastout]
fn main() {
    input! {
        mut s: Chars
    }
    for i in (0..s.len()).rev() {
        if s[i] != '0' {
            break;
        }
        s.pop();
    }
    for i in 0..s.len() / 2 {
        if s[i] != s[s.len() - 1 - i] {
            println!("No");
            return;
        }
    }
    println!("Yes");
}
