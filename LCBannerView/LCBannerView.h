//
//  LCBannerView.h
//  LCBannerViewDemo
//
//  Created by Leo on 15/11/30.
//  Copyright © 2015年 Leo. All rights reserved.
//
//  V 1.0.0

#import <UIKit/UIKit.h>



@class LCBannerView;



@protocol LCBannerViewDelegate <NSObject>

@optional

- (void)bannerView:(LCBannerView *)bannerView didClickedImageIndex:(NSInteger)index;

@end



@interface LCBannerView : UIView


@property (nonatomic, weak) id<LCBannerViewDelegate> delegate;
@property (nonatomic, copy) NSString *imageName;
@property (nonatomic, strong) NSArray *imageURLs;
@property (nonatomic, assign) NSInteger count;
@property (nonatomic, strong) UIColor *currentPageIndicatorTintColor;
@property (nonatomic, strong) UIColor *pageIndicatorTintColor;
@property (nonatomic, copy) NSString *placeholderImage;

@property (nonatomic, strong) NSTimer *timer;
@property (nonatomic, weak) UIScrollView *scrollView;
@property (nonatomic, weak) UIPageControl *pageControl;


#pragma mark - Class methods

- (void)setupMainView;

@end
