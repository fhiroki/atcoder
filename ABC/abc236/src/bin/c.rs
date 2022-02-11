use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        n: usize,
        m: usize,
        s: [String; n],
        mut t: [String; m]
    }
    t.sort();
    for i in 0..n {
        let ans = match t.binary_search(&s[i]) {
            Ok(_) => "Yes",
            Err(_) => "No",
        };
        println!("{}", ans);
    }
}
