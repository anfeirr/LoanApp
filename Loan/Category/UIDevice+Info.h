//
//  UIDevice+Info.h
//  LingTouNiaoZF
//
//  Created by LiuFeifei on 16/11/11.
//  Copyright © 2016年 LiuJie. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIDevice (Info)

///=============================================
/// @name Basic information
///=============================================

/**
 * e.g. @"My iPhone"
 */
+ (NSString *)name;
/**
 * e.g. @"iOS"
 */
+ (NSString *)systemName;
/**
 * e.g. @"7.1"
 */
+ (NSString *)systemVersion;
/**
 * e.g. @"11D169"
 */
+ (NSString *)systemBuildIdentifier;
/**
 * e.g. @"iPhone", @"iPod touch", @"iPhone Simulator"
 */
+ (NSString *)model;
/**
 * e.g. @"iPhone3,1", @"x86_64"
 * @see: http://theiphonewiki.com/wiki/Models
 */
+ (NSString *)platform;
/**
 *  根据platform返回机型
 */
+(NSString*)deviceString;
/**
 * e.g. @"AT&T", @"ChinaNet"
 */
+ (NSString *)carrierString;
/**
 * Returns the current Wi-Fi SSID.
 */
+ (NSString *)currentWiFiSSID;

/**
 * Returns the device's UDID, a 40 hexadecimal numbers in lower-case, using **OpenUDID** library.
 * e.g. @"36acf6e5d9f3bf66d2084dbc2b2b07f895ea9848"
 *
 * iOS Simulator will always returns @"0000000000000000000000000000000000000000"
 *
 * @see [OpenUDID](https://github.com/ylechelle/OpenUDID)
 */
+ (NSString *)deviceIdentifier;

+ (NSString *)IDFA;

/**
 * Detect whether this device has been jailbroken.
 */
+ (BOOL)isJailBroken;

/**
 * 获取推送设置状态
 */

+(BOOL)isAllowedNotification;

/**
 * Returns `ESIsPhoneDevice()`
 */
//+ (BOOL)isPhoneDevice;
/**
 * Returns `ESIsPadDevice()`
 */
//+ (BOOL)isPadDevice;

///=============================================
/// @name Disk space
///=============================================

//+ (unsigned long long)diskFreeSize;
//+ (NSString *)diskFreeSizeString;
//+ (unsigned long long)diskTotalSize;
//+ (NSString *)diskTotalSizeString;

///=============================================
/// @name Screen
///=============================================
/**
 * The width and height in pixels.
 * e.g. 640x960
 */
+ (CGSize)screenSize;
/**
 * e.g. @"640x960", the `width` is always littler than `height`.
 */
+ (NSString *)screenSizeString;

//+ (BOOL)isRetinaScreen;
+ (BOOL)isIPhoneRetina4InchScreen;
+ (BOOL)isIPhoneRetina35InchScreen;

///=============================================
/// @name Locale
///=============================================

+ (NSTimeZone *)localTimeZone;
+ (NSInteger)localTimeZoneFromGMT;

+ (NSLocale *)currentLocale;
/**
 * e.g. @"zh", @"en"
 */
+ (NSString *)currentLocaleLanguageCode;
/**
 * e.g. @"CN", @"US"
 */
+ (NSString *)currentLocaleCountryCode;
/**
 * languageCode_countryCode.
 * e.g. @"zh_CN", @"en_US"
 */
+ (NSString *)currentLocaleIdentifier;

@end
