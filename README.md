# Semi-auto-correct 42
A correction tool for peer correction at 42 school (France)

## Utilisation

```shell
cd && cd goinfre
git clone https://github.com/Buom01/semi-auto-correct eval_${YOUR_USERNAME}
cd eval_${YOUR_USERNAME}
cd ${PROJET}
git clone ${PROJET_GIT} eval
../correct.sh
```

Merci de mettre une Star si ce projet vous a été utile.

Note: Je ne prenderais probablement pas le temps de faciliter l'utilisation de cet outil durant la piscine. L'utilisation de ce programme n'est pas très compliqué.

## Règles d'utilisations
- Vous devez pouvoir expliquez les testes que vous effectuez à la personne corrigé (`cat ${PROJET}/${EXO}/main.c` ou `cat ${PROJET}/${EXO}/run.sh`)
- Vous devez vérifier vous le code à la main, notamment les fonctions interdites. Ce projet n'est qu'un outils aidant à la correction qui réalise quelques testes supplémentaires en fournissant des fichiers `main.c` aux exercices de fonctions ou des fichiers `run.sh` aux exercices de programmes.
- L'objectif est de passer vos 15min à expliquer les erreurs du corrigé et à lui proposé des solutions simple plutôt qu'uniquement tester ses programmes pendant 30min.
- Merci de me créditer lorsque vous utilisez mon outil.
- Je vous recommande donc de savoir comment résoudre les problèmes des fonctions soumises, tout comme de vérifier par vous même qu'il y a bien une erreur au cas où mon programme l'affirmerait.
- Son usage se fait à vos risques et périls. Je ne pourait être tenu responsable des potentiels dommages ou préjudices qu'à réalisé cet outil.

## Conseils
- Vérifiez bien que le projet que vous souhaitez corriger est disponible sur cet outil.
- Utilisez-le sur vos projets avant de l'utiliser pour corriger les autres.
- Expliquer bien au corrigé que vous utilisez un outil de correction, et préférez affirmer à qui appartient l'outil plutôt que d'affirmer vaguement qu'il appartient à un piscineux lambda.

## Avertissement
J'essaie de mettre à jour mes tests en accord avec la moulinette pour pouvoir avoir une explication directe des erreurs du corrigé et lui permettre ainsi une meilleur compréhension de ses erreurs.
Comprenez que la moulinette est une boite noir qui n'est pas constante dans le temps. Je vous recommande ainsi de checker régulièrement la partie 'issues' afin d'être au courant des différents changement reportés sur la moulinette.
En cas de problème avec cet outil, vous en assumerez pleinement les conséquences. Cet outil est disponible tel quel.
Ce document est suceptible de changer fréquement. Vous êtes tenu de vous tenir informé dès lors que vous utilisez l'outil `semi-auto-correct`.
