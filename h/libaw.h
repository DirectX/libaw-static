//
//  Banner.h
//  awdemo
//
//  Created by Denis on 13.07.15.
//  Copyright (c) 2015 AdWired. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


@class BannerView;


typedef void(^BannerViewBlock)(BannerView* bannerView);
typedef void(^BannerViewErrorBlock)(BannerView* bannerView, NSError* error);


@interface BannerView : UIView <UIWebViewDelegate>

@property (nonatomic, copy) NSString* placeId;

- (id)initWithFrame:(CGRect)frame placeId:(NSString*)placeId;
- (void)show:(BannerViewBlock)completeBlock errorBlock:(BannerViewErrorBlock)errorBlock closeBlock:(BannerViewBlock)closeBlock;
- (void)show;
- (void)hide;

@end


@interface FullscreenBanner : NSObject

@property (nonatomic, copy) NSString* placeId;

- (id)initWithPlaceId:(NSString*)placeId;
- (void)show:(BannerViewBlock)completeBlock errorBlock:(BannerViewErrorBlock)errorBlock closeBlock:(BannerViewBlock)closeBlock;
- (void)show;
- (void)hide;

@end