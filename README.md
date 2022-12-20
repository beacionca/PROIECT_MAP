# PROIECT_MAP PROBLEMA COLORĂRII ȚĂRILOR
 problema colorarii tarilor
 <!DOCTYPE html>
<html>
<body>
<h1>Un grup de N tari trebuie reprezentate pe o harta cu culori diferite, astfel incat oricare dintre acestea sa fie colorata diferit de vecinii sai. Sa se scrie un program care primeste la intrare lista celor N tari (denumire, lista vecini), lista de culori posibile si determina culoarea pentru fiecare tara in parte.</h1>
<h4>Introducere</h4>
<p>Implementarea metodei backtracking este o posibila solutie intrucat output-ul programului va fi reprezentat de o multime de posibilitati(toate) de colorare a tarilor, cu conditia ca tarile vecine sa fie colorate in culori diferite. 
Pentru accesarea listelor de vecini a fiecarei tari, am utilizat o matrice patratica simetrica fata de diagonala principala (asemanatoare unei matrice de adiacenta pentru un graf neorientat). Fiecare element al matricei a(i,j) va lua una din valorile: 0 - tarile i si j nu sunt vecine sau 1 - tarile i si j sunt vecine.
Lista tarilor este prezenta sub forma unui vector de siruri : tara[6][10] si contine tarile : "Italia","Elvetia","Austria","Germania","Franta","Spania" iar lista culorilor este prezenta sub forma unui vector de siruri : culoare[4][10] si contine elementele: "rosu","negru","alb","verde".
Solutiile finale valide sunt salvate intr-un array x de dimensiune maxima 6 - cate o culoare pentru fiecare tara.</p>
<h4>Analiza algoritmului</h4>
<p>Algoritmul urmareste generarea tuturor solutiilor posibile cu ajutorul a 2 functii: succ() si valid. Functia succ() urmareste generarea unei culori existente si functia valid() verifica daca culorile alese pentru tarile din actuala solutie sunt aceleasi pentru tarile vecine. Atat timp cat solutia actuala este  valida, se vor genera culori prin functia succ() pana cand se ajunge la o solutie cu cardinalul egal cu numarul tarilor, in acel moment urmand a fi afisata. Programul se opreste cand se genereaza toate solutiile posibile valide. (ultima solutie generata invalida va fi ultima culoare repetat de 6 ori). Solutiile au fost retinute in vectorul x[] pentru a scade timpul executiei in comparatie cu folosirea unui vector x[] de cuvinte</p>
<img src="Assets\img1.png" width="1000">
<img src="Assets\img2.png" width="1000">
<img src="Assets\img3.png" width="1000">
<img src="Assets\img4.png" width="1000">
<img src="Assets\img5.png" width="1000">
<h2>Bibliografie</h2>
<p>https://www.referatele.com/referate/informatica/online8/PROBLEMA-COLORARII-HARTILOR--cu-metoda-backtracking-referatele-com.php</p>
</body>
</html>

