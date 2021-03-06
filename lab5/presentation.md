---
## Front matter
lang: ru-RU
title: Лабораторная работа 5. Дискреционное разграничение прав в Linux. Исследование влияния дополнительных атрибутов.
author: |
	 Поленикова Анна Алексеевна\inst{1}

institute: |
	\inst{1}Российский Университет Дружбы Народов

date: Москва, 2021

## Formatting
mainfont: PT Serif
romanfont: PT Serif
sansfont: PT Sans
monofont: PT Mono
toc: false
slide_level: 2
theme: metropolis
header-includes: 
 - \metroset{progressbar=frametitle,sectionpage=progressbar,numbering=fraction}
 - '\makeatletter'
 - '\beamer@ignorenonframefalse'
 - '\makeatother'
aspectratio: 43
section-titles: true

---

# Цели и задачи работы

## Цель лабораторной работы

Изучение механизмов изменения идентификаторов, применения SetUID- и Sticky-битов. Получение практических навыков работы в консоли с дополнительными атрибутами. Рассмотрение работы механизма смены идентификатора процессов пользователей, а также влияние бита Sticky на запись и удаление файлов.

# Процесс выполнения лабораторной работы

## Подготовка лабораторного стенда

![Подготовка](image/1.png){ #fig:001 width=70% }

## Создание программы simpleid.c

![Код simpleid.c](image/2.png){ #fig:002 width=70% }

## Компиляция и выполнение программы simpleid

![Компиляция и выполнение программы simpleid](image/3.png){ #fig:003 width=70% }

## Создание программы simpleid2.c

![Код simpleid2.c](image/4.png){ #fig:004 width=70% }

## Компиляция и выполнение программы simpleid2

![Компиляция и выполнение программы simpleid2](image/5.png){ #fig:005 width=70% }

## Изменение владельца и атрибутов simpleid2

![Изменение владельца и атрибутов simpleid2](image/6.png){ #fig:006 width=70% }

![Запуск simpleid2 и id](image/7.png){ #fig:007 width=70% }

## Повторение операций для SetGID-бита

![Повторение операций для SetGID-бита](image/8.png){ #fig:008 width=70% }

## Создание программы readfile.c

![Код readfile.c](image/9.png){ #fig:009 width=70% }

## Компиляция. Смена владельца и изменение прав файла readfile.c

![Компиляция. Смена владельца и изменение прав файла readfile.c](image/10.png){ #fig:010 width=70% }

## Операции с программой readfile

![Смена владельца программы readfile и установка SetUID-бита. Чтение файла readfile.c](image/11.png){ #fig:011 width=70% }

![Чтение файла /etc/shadow](image/12.png){ #fig:012 width=70% }

## Проверка Sticky атрибута. Создание файла file1

![Проверка Sticky атрибута. Создание файла file1. Изменение атрибутов для категории пользователей «все остальные»](image/13.png){ #fig:013 width=70% }

## Операции с файлом file01.txt

![Операции с файлом file01.txt](image/14.png){ #fig:014 width=70% }

## Снятие t атрибута с директории /tmp

![Снятие t атрибута с директории /tmp](image/15.png){ #fig:015 width=70% }

## Операции с файлом file01.txt после снятия t атрибута

![Операции с файлом file01.txt после снятия t атрибута](image/16.png){ #fig:016 width=70% }

## Возвращение t атрибута директории /tmp

![Возвращение t атрибута директории /tmp](image/17.png){ #fig:017 width=70% }

# Выводы по проделанной работе

## Вывод

В результате проделанной лабораторной работы были изучены механизмы изменения идентификаторов, применения SetUID- и Sticky-битов, получены практические навыки работы в консоли с дополнительными атрибутами, а также рассмотрены работы механизма смены идентификатора процессов пользователей и влияние бита Sticky на запись и удаление файлов.