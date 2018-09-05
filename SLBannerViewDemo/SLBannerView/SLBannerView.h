//
//  SLBannerView.h
//  SLBannerViewDemo <https://github.com/TravelColor/SLBannerView>
//  个人邮箱：songleitravel@163.com
//  Created by 宋雷 on 2018/8/31.
//  Copyright © 2018年 Travelcolor. All rights reserved.
//

#import <UIKit/UIKit.h>

@class SLBannerView;
@protocol SLBannerViewDelegate <NSObject>

@optional
/** 监听点击的图片 */
- (void)bannerView:(SLBannerView *)banner didClickImagesAtIndex:(NSInteger)index;

@end

@interface SLBannerView : UIView

/** 必须：sl要展示的图片数组,必须要传入图片（网络，本地，工程图片可用） */
@property (nonatomic, strong) NSArray *slImages;

/** 可选：要展示的标题数组,可选传入标题 */
@property (nonatomic, strong) NSArray *slTitles;
/** 可选：每张图片的停留时间，默认2秒 */
@property (nonatomic, assign) NSTimeInterval imgStayTimeInterval;
/** 可选：图片的切换动画持续时间，默认0.3秒 */
@property (nonatomic, assign) NSTimeInterval durTimeInterval;
/** 可选：标题label,可选修改字体大小位置颜色等 */
@property (nonatomic, weak) UILabel *titleLabel;
/** 根据项目需求传入占位图片 */
@property (nonatomic, strong) UIImage *placeholderImg;

@property (nonatomic, weak) id <SLBannerViewDelegate> delegate;

/** xib快速构造方法 */
+ (instancetype)bannerViewXib;
/** 代码快速构造方法 */
+ (instancetype)bannerView;
/**
 注：圆点页码控制，默认靠下居中
 */
@end
