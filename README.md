# Test
Для тренировки

## Задача №1

```
    Написать программу, запрашивающую у пользователя возраст, а затем
    предоставляющую или запрещающую ему доступ к воображаемому ресурсу.
    Программа должна выводить на экран строки "Access denied" или "Access granted"
    в зависимости от возраста (18 и более лет).
```

Программа должна содержать функцию **int checkAge(int age)**, которая анализирует возраст
и возвращает **1**, если возраст >=18 и **0** - в противном случае.

Программа должна состоять из 3-х файлов:

- **task1.h** - заголовочный файл, содержащий заголовок **int checkAge(int age);**
- **task1.c** - файл, содержащий исходный код **checkAge**
- **main1.c** - файл, содержащий диалог с пользователем.

Для выполнения работы необходимо:
1. Выполнить *fork* репозитория в свой аккаунт.
1. Выполнить клонирование репозитория из своего аккаунта к себе на локальную машину.
1. Создать ветку **git** с индивидуальным номером.
1. Сделать ветку активной.
1. Создать каталог *work*
1. Поместить в этот каталог перечисленные выше 3 файла.
1. Добавить файлы в хранилище **git add .**
1. Выполнить фиксацию изменений **git commit -m "комментарий"**
1. Отправить содержимое ветки в свой удаленный репозиторий **git push origin имяветки**
1. Создать пул-запрос в репозиторий группы и ждать результата...
