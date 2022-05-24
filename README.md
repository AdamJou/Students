# Students

Napisać pomocnicze biblioteki oraz program główny dla następującego zadania:<br>
Dziekanat wykonuje operacje na danych studentów kierunku informatyka.<br
Dane wejściowe umieszczone są dwóch plikach tekstowych GRA.txt i SID.txt – w pierwszym pliku znajdują się<br>
dane studentów specjalności „Grafika i projektowanie gier”, a w drugim - „Sieci komputerowe i<br>
przetwarzanie danych”. Każda linia w tych plikach zawiera dane pojedynczego studenta<br>
rozdzielone pojedynczymi spacjami w następującej kolejności: nazwisko, imię (imiona), numer<br>
indeksu i ocena z egzaminu, np.:<br><br>
<i>Kowalski Jan Piotr 123456 4.5</i><br><br>
Pliki wejściowe uporządkowane są rosnąco wg nazwiska i imienia (imion). Liczba linii w plikach<br>
nie jest znana z góry. Nazwiska i imiona są dowolnej długości (przy czym dla uproszczenia<br>
przyjmujemy że poprawnym imieniem / nazwiskiem jest dowolny ciąg znaków nie zawierający<br>
spacji), numery indeksów są liczbami całkowitymi dodatnimi, a oceny liczbami rzeczywistymi z<br>
zakresu 2..5.<br><br>
Wynik działania programu zapisany ma być do pliku tekstowego o nazwie INF.txt i jest nim lista<br>
wszystkich studentów informatyki uporządkowanych rosnąco wg numeru indeksu. Dane<br>
pojedynczego studenta muszą znajdować się w pojedynczej linii zawierającej oddzielone<br>
średnikami kolejno: numer indeksu, ocenę, nazwisko z inicjałami imion, np.:<br><br>
<i>123456;4.5;Kowalski J.P.</i>
