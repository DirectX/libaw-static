# libaw-static
Статическая библиотека рекламной сети AdWired для iOS 7.0+ с поддержкой CocoaPods

## Использование через CocoaPods
Установить CocoaPods (https://cocoapods.org/), создать в XCode iOS проект, после создания которого XCode можно закрыть.

Открыть терминал, перейти в папку созданного проекта. Выполнить команду:
    
    pod init

Создастся новый файл Podfile. Необходимо добавить в него следующее содержимое:
    
    platform :ios, '7.0'
    pod 'libaw', :git => 'https://github.com/DirectX/libaw-static'

В терминале выполнить команду

    pod install
    
При этом будет установлена библиотека libaw, а также зависимость AFNetworking. Далее нужно открыть исходный проект, но не \*.xcodeproject, a \*.xcodeworkspace. В дальнейшем использовать его.

В свойствах проекта на вкладке Info добавить два строковых значения для API Key aи API Secret. Ниже приводятся значения для тестового приложения:

    "AW API Key": "DI1hmcN3xJyMOzdh"
    "AW API Secret": "r2qR9kc1pYbLUPnDm5Mht20WCtJy8Aej"
    
Добавить в файл ViewController.m

    #import "libaw.h"
    
Выполнить пробный запуск приложения.

### Полноэкранный баннер
    - (void)viewDidLoad {
        [super viewDidLoad];
        
        FullscreenBanner* fullscreenBanner = [[FullscreenBanner alloc] initWithPlaceId:@"startup"];
    	[fullscreenBanner show];
    }
    
### Стандартный баннер
    - (void)viewDidLoad {
        [super viewDidLoad];
        
        BannerView* banner = [[BannerView alloc] initWithFrame:CGRectMake(0, self.view.frame.size.height - self.view.frame.size.width * 50.0f / 320.0f, self.view.frame.size.width, self.view.frame.size.width * 50.0f / 320.0f) placeId:@"news"];
        banner.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleBottomMargin;
        [self.view addSubview:self.banner];
        [self.banner show];
    }

    