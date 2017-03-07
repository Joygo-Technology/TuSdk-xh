//
//  TuSDKPFStickerLocalPackage.h
//  TuSDK
//
//  Created by Clear Hu on 15/1/7.
//  Copyright (c) 2015年 tusdk.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TuSDKPFStickerCategory.h"
#import "TuSDKConfig.h"
#import "TuSDKNKDownloadItem.h"

@class TuSDKPFStickerLocalPackage;

/**
 *  本地贴纸包委托
 */
@protocol TuSDKPFStickerLocalPackageDelegate <NSObject>

/**
 *  本地贴纸包下载状态改变
 *
 *  @param manager 本地贴纸包
 *  @param item    下载对象
 *  @param status  下载状态
 */
- (void)stickerManager:(TuSDKPFStickerLocalPackage *)manager
                  item:(TuSDKNKDownloadItem *)item
         changedStatus:(lsqDownloadTaskStatus)status;
@end

/**
 *  本地贴纸包
 */
@interface TuSDKPFStickerLocalPackage : NSObject

/**
 *  分类列表
 */
@property (nonatomic, readonly) NSArray *categories;

/**
 *  是否已初始化
 */
@property (nonatomic, readonly) BOOL isInited;
/**
 *  本地贴纸包
 *
 *  @return 本地贴纸包
 */
+ (instancetype)package;

/**
 *  本地贴纸包
 *
 *  @param config Sdk配置
 *
 *  @return 本地贴纸包
 */
+ (instancetype)initWithConfig:(TuSDKConfig *)config;

/**
 *  加载贴纸预览图片
 *
 *  @param sticker   贴纸数据
 *  @param imageView 图片视图
 */
- (void)loadThumbWtihSticker:(TuSDKPFSticker *)sticker imageView:(UIImageView *)imageView;

/**
 *  取消加载图片
 *
 *  @param imageView 图片视图
 */
- (void)cancelLoadImage:(UIImageView *)imageView;

/**
 *  加载贴纸数据
 *
 *  @param sticker  贴纸数据对象
 *
 *  @return  是否加载贴纸数据对象
 */
- (BOOL)loadStickerData:(TuSDKPFSticker *)sticker;

/**
 *  加载智能贴纸中包含的素材
 *
 *  @param sticker  贴纸数据对象
 *  @param resName  元素名
 *
 *  @return  是否加载贴纸数据对象
 */
- (UIImage *)loadSmartSticker:(TuSDKPFSticker *)sticker withResName:(NSString *)resName;

/**
 *  添加本地贴纸包委托
 *
 *  @param delegate 本地贴纸包委托
 */
- (void)appenDelegate:(id<TuSDKPFStickerLocalPackageDelegate>)delegate;

/**
 *  删除本地贴纸包委托
 *
 *  @param delegate 本地贴纸包委托
 */
- (void)removeDelegate:(id<TuSDKPFStickerLocalPackageDelegate>)delegate;

/**
 *  下载贴纸
 *
 *  @param idt 贴纸ID
 *  @param key 下载SN
 *  @param fileId 文件ID
 */
- (void)downloadWithIdt:(uint64_t)idt key:(NSString *)key fileId:(NSString *)fileId;

/**
 *  取消下载贴纸
 *
 *  @param idt 贴纸ID
 */
- (void)cancelDownloadWithIdt:(uint64_t)idt;

/**
 *  删除下载贴纸
 *
 *  @param idt 贴纸ID
 */
- (void)removeDownloadWithIdt:(uint64_t)idt;

/**
 *  获取分类数据
 *
 *  @param idt 分类ID
 *
 *  @return 分类数据
 */
- (TuSDKPFStickerCategory *)categorieWithIdt:(uint64_t)idt;

/**
 *  获取贴纸数据对象
 *
 *  @param idt 贴纸数据对象ID
 *
 *  @return 贴纸数据对象
 */
- (TuSDKPFSticker *)stickerWithIdt:(uint64_t)idt;

/**
 *  分类列表
 *
 *  @param categories 已选中分类列表 (如果为空返回所有分类)
 *
 *  @return 分类列表
 */
- (NSArray *)categoriesWithCategories:(NSArray *)categories;

/**
 *  获取智能贴纸列表
 *
 *  @return 贴纸列表
 */
- (NSArray<TuSDKPFSticker *> *)getSmartStickers;

/**
 *  获取智能贴纸组列表
 *
 *  @return 贴纸组列表
 */
- (NSArray<TuSDKPFStickerGroup *> *)getSmartStickerGroups;

/**
 *  获取所有json数据
 *
 *  @return json数据
 */
- (NSString *)jsonAllData;
@end
