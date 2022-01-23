use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        n: usize,
        ab: [(f64, f64); n]
    }
    let mut half = ab.iter().map(|x| x.0 / x.1).sum::<f64>() / 2.0;
    let mut ans = 0.0;
    for i in 0..n {
        let t = ab[i].0 / ab[i].1;
        if half >= t {
            half -= t;
            ans += ab[i].0;
        } else {
            ans += half * ab[i].1;
            break;
        }
    }
    println!("{}", ans);
}
