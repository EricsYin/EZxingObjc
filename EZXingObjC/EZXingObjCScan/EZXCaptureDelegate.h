//
//  EZXCaptureDelegate.h
//  EZXingObjC
//
//  Created by erics on 2018/7/9.
//  Copyright © 2018年 EricsYinGroup. All rights reserved.
//

#import <Foundation/Foundation.h>
@class EZXCapture;
@class ZXResult;  

@protocol EZXCaptureDelegate <NSObject>
#pragma mark  由ZXReader解析返回的结果
- (void)captureResult:(EZXCapture *)capture result:(ZXResult *)result scanImage:(UIImage*)img;

/////由系统CIDetector解析返回的结果
//- (void)captureSystemResult:(LBXZXCapture *)capture result:(NSString *)result scanImage:(UIImage*)img;

@optional

#pragma mark 实时返回capture output图片
- (void)zxingLuminanceSourceImage:(UIImage*)image;

- (void)ECaptureSize:(EZXCapture *)capture
                 width:(NSNumber *)width
                height:(NSNumber *)height;

- (void)ECaptureCameraIsReady:(EZXCapture *)capture;

@end
