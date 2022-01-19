use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        x: String,
        n: usize,
        mut s: [String; n]
    }
    s.sort_by_key(|si| si.chars().map(|c| x.find(c)).collect::<Vec<_>>());
    for si in s {
        println!("{}", si);
    }
}
