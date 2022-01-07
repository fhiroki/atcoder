use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        n: usize,
        mut v: [(u8, u64, u64); n]
    }
    v.sort_by(|a, b| a.1.cmp(&b.1));

    let mut ans = 0;
    for i in 0..n {
        let r = v[i].2;
        for j in i + 1..n {
            let l = v[j].1;
            if r == l {
                if (v[i].0 == 1 || v[i].0 == 3) && (v[j].0 == 1 || v[j].0 == 2) {
                    ans += 1;
                }
            } else if r > l {
                ans += 1;
            }
        }
    }
    println!("{}", ans);
}
