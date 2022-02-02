use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        n: usize,
        mut w: u64,
        mut cheese: [(u64, u64); n],
    }
    cheese.sort_by(|a, b| b.0.cmp(&a.0));
    let mut ans = 0;
    for (a, b) in cheese {
        let weight = b.min(w);
        ans += a * weight;
        w -= weight;
    }
    println!("{}", ans);
}
