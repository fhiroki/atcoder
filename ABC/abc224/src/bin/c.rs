use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        n: usize,
        xy: [(i64, i64); n]
    }
    let mut ans = 0;
    for a in 0..n {
        for b in a + 1..n {
            for c in b + 1..n {
                let ax = xy[a].0;
                let ay = xy[a].1;
                let bx = xy[b].0;
                let by = xy[b].1;
                let cx = xy[c].0;
                let cy = xy[c].1;
                if ((ay - by) * (bx - cx)) != ((ax - bx) * (by - cy)) {
                    ans += 1;
                }
            }
        }
    }
    println!("{}", ans);
}
