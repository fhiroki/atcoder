use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        n: u32,
        mut v: [(String, u32); n]
    }
    v.sort_by(|a, b| b.1.cmp(&a.1));
    println!("{}", v[1].0);
}
