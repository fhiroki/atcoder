use std::vec;

use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        s: String
    }
    let mut ans = 0;
    for i in 0..10000 {
        let v = vec![i / 1000, i / 100 % 10, i / 10 % 10, i % 10];
        if s.chars().enumerate().all(|(i, c)| match c {
            'o' => v.contains(&i),
            'x' => !v.contains(&i),
            _ => true,
        }) {
            ans += 1;
        }
    }
    println!("{}", ans);
}
