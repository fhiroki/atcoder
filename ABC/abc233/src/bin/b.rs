use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        mut l: usize,
        r: usize,
        s: String
    }
    l -= 1;
    let mut ans = s[..l].to_string();
    ans += &s[l..r].chars().rev().collect::<String>();
    ans += &s[r..];
    println!("{}", ans);
}
