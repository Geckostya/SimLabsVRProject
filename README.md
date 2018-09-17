# SimLabsVRProject
Project goal: Create a client application for android powered by Unreal Engine 4 for recieving from server and show 360° image in realtime in VR.

* [video demo]
* [Рессуры]
* [Trello]

[video demo]: https://www.youtube.com/watch?v=IvJK6Ctb-pI
[Рессуры]: https://drive.google.com/open?id=1BLtdeeRkNf2AWwi1wGqsxJ_Ba_zmWvym
[Trello]: https://trello.com/b/vu7LExDI/simlabsvrproject

## Сборка
Версия движка 4.17
Необходимо поставить всё необходимое для Android:
* Установить CodeWorks из папки "C:\Program Files\Epic Games\UE_4.17\Engine\Extras\AndroidWorks\Win64"
* Установить выбранное по умолчанию из "C:\NVPACK\Chooser.exe". 
(На самом деле там нужно не всё, но стоит поставить свой API, 24тый API(Можно без Atom, наверное), ARM из 23 API , самый верхний Anroid SDK, AndroidToolchain(кроме Eclipse и ADT))
* Запустить C:\NVPACK\android-sdk-windows\android-sdk-windows\tools\android.bat, в нём нужно установить из раздела Extras Android Support Repository, Google Repository, Google Play Licensing Library, Google USB Driver(А может что-то из этого и не нужно)

После этого нужно зайти в сам проект. Там должно быть всё настроено, но нужно
* В разделе Platforms\Android нажать на Configure Now в двух местах
* В разделе Platforms\Android SDK выбрать все компоненты из NVPACK, при этом SDK API поставить latest, а NDK API android-19

Чтобы собрать проект:
* Нужно нажать кнопку Compile в верхней панели
* Подключить телефон и Launch выбрать устройство
 
 Чтобы что-то изменить в проекте:
* Если менять что-то в плюсах, то можно сгенирировать проект VS(либо в менюшке file, либо правым кликом на .uproject файле в папке), либо править и так.
* После правок правок нужно компилировать с помощью кнопки Compile из UE4. Если код был в #ifdef ANDROID_PLATFORM, то не нужно
* Чтобы поменять что-то в jar, достаточно открыть проект(через import project) в IDEA, там должны быть установлены тулы для анроид, если нет -- он должен их подкачать.
* После всевозможных скачиваний всего, что захочет идея, можно править код, для сборки выбрать задание в панели Gradle(слева) app/other/createJar.
* Jar положится в нужную папку сам, но чтобы его схватил UE4, нужно что-то изменить в плюсовом коде, например, поставить пробел.
