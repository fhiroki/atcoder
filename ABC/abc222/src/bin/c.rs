use proconio::{fastout, input, marker::Chars};

#[fastout]
fn main() {
    input! {
        n: usize,
        m: usize,
        a: [Chars; 2*n]
    }
    let mut rank: Vec<(usize, usize)> = (0..2 * n).map(|x| (x, 0)).collect();
    for i in 0..m {
        for j in (0..2 * n).step_by(2) {
            let x = a[rank[j].0][i];
            let y = a[rank[j + 1].0][i];
            if x == 'G' && y == 'P' || x == 'C' && y == 'G' || x == 'P' && y == 'C' {
                rank[j + 1].1 += 1;
            } else if x == 'P' && y == 'G' || x == 'G' && y == 'C' || x == 'C' && y == 'P' {
                rank[j].1 += 1;
            }
        }
        rank.sort_by(|x, y| {
            if x.1 == y.1 {
                x.0.cmp(&y.0)
            } else {
                y.1.cmp(&x.1)
            }
        });
    }
    for (r, _) in rank {
        println!("{}", r + 1);
    }
}
