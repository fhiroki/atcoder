use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        mut s: String
    }
    let ans = s.chars().rev().map(|c| {
        match c {
            '6' => '9',
            '9' => '6',
            _ => c
        }
    }).collect::<String>();
    println!("{}", ans);
}
