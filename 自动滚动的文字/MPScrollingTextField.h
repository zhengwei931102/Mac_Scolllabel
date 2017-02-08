//
//  MPScrollingTextField.h
//  MiniPlay
//
//  Created by Denis Stas on 10/23/14.
//  Copyright (c) 2014 Denis Stas. All rights reserved.
//
/**
 *  自动scroll的文字
 *
 *
 */
#import <Cocoa/Cocoa.h>

@interface MPScrollingTextField : NSTextField

/*!
 * @brief Scrolling rate in pixels per second. Defaults to 20.
 */
@property (nonatomic, assign) IBInspectable CGFloat scrollingRate;//有默认值

/*!
 * @brief Scrolling offset between two text layers that are being scrolled. Defaults to 50.
 */
@property (nonatomic, assign) IBInspectable CGFloat scrollingOffset;//有默认值

@property (nonatomic,retain)NSString *text;

@end
