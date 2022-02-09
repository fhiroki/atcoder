use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        n: usize,
        p: [(f32, f32); n]
    }
    let mut ans: f32 = 0.0;
    for i in 0..n {
        for j in i + 1..n {
            let d = (p[i].0 - p[j].0).powf(2.0) + (p[i].1 - p[j].1).powf(2.0);
            ans = ans.max(d.sqrt());
        }
    }
    println!("{}", ans);
}
