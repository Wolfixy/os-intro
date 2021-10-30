---
## Front matter
lang: ru-RU
title: Лабораторная работа 4. Дискреционное разграничение прав в Linux. Расширенные атрибуты.
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

Получение практических навыков работы в консоли с расширенными атрибутами файлов.

# Процесс выполнения лабораторной работы

## Установка прав и расширенных атрибутов

![Расширенные атрибуты файла file1](image/1.png){ #fig:001 width=70% }

![Установка прав и расширенных атрибутов на файл file1](image/2.png){ #fig:002 width=70% }

## Установка расширенных атрибутов и проверка

![Установка расширенных атрибутов на файл file1 от имени суперпользователя](image/3.png){ #fig:002 width=70% }

![Расширенные атрибуты файла file1](image/4.png){ #fig:005 width=70% }

## Операции с файлом file1

![Дозапись в файл file1 слова «test»](image/5.png){ #fig:003 width=70% }

![Удаление и переименование файла file1](image/6.png){ #fig:003 width=70% }

![Установка на файл file1 прав, запрещающих чтение и запись для владельца файла](image/7.png){ #fig:003 width=70% }

## Повторение операций с файлом file1

![Снятие расширенного атрибута a от имени пользователя guest и от имени суперпользователя](image/8.png){ #fig:005 width=70% }

![Переименование и удаление файла file1](image/9.png){ #fig:004 width=70% }

## Расширенный атрибут i

![Операции с файлом file1 с расширенным атрибутом i](image/10.png){ #fig:004 width=70% }

# Выводы по проделанной работе

## Вывод

В результате проделанной лабораторной работы были получены практические навыки работы в консоли с расширенными атрибутами файлов.