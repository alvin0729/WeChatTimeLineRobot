/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMObject.h"

@class NSString;
@protocol SimpleImgInfoDelegate;

@interface SimpleImgInfo : MMObject {
	NSString* m_strMsgLocalID;
	unsigned long m_uiCreateTime;
	BOOL m_bExpired;
	id<SimpleImgInfoDelegate> m_delegate;
}
@property(assign, nonatomic) __weak id<SimpleImgInfoDelegate> m_delegate;
@property(assign, nonatomic) BOOL m_bExpired;
@property(assign, nonatomic) unsigned long m_uiCreateTime;
@property(retain, nonatomic) NSString* m_strMsgLocalID;
-(void).cxx_destruct;
-(int)compare:(id)compare;
-(BOOL)isShortVideoMsg;
-(BOOL)isVideoMsg;
-(BOOL)isImgMsg;
-(BOOL)isAppVideoMsg;
-(BOOL)isAppMusicMsg;
-(BOOL)isAppFileMsg;
-(BOOL)isAppUrlMsg;
-(id)getIconName;
-(id)getDefaultImg;
-(unsigned long)getVideoTime;
-(id)getSightPath;
-(id)getImgPath;
-(id)getSquareImgDir;
-(id)getTitle;
@end

