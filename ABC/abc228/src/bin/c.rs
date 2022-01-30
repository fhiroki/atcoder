use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        n: usize,
        k: usize,
        p: [[u16; 3]; n]
    }
    let mut v: Vec<u16> = p.iter().map(|p| p.iter().sum()).collect();
    v.sort_by(|a, b| a.cmp(&b));
    for i in 0..n {
        let sum = p[i].iter().sum::<u16>() + 300;
        let mut rank = match v.binary_search_by(|a| a.cmp(&sum)) {
            Ok(x) => x + 1,
            Err(x) => x,
        };
        rank = n - rank + 1;
        if rank <= k {
            println!("Yes");
        } else {
            println!("No");
        }
    }
}
