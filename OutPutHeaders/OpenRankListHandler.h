/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMObject.h"
#import "IPreEnterWechatLogicExt.h"
#import "WCShareAuthViewControllerDelegate.h"

@class NSURL, NSString, MMUINavigationController;

@interface OpenRankListHandler : MMObject <WCShareAuthViewControllerDelegate, IPreEnterWechatLogicExt> {
	NSString* _appId;
	NSString* _bundleId;
	NSURL* _url;
	MMUINavigationController* _navigationController;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) MMUINavigationController* navigationController;
@property(retain, nonatomic) NSURL* url;
@property(retain, nonatomic) NSString* bundleId;
@property(retain, nonatomic) NSString* appId;
-(void).cxx_destruct;
-(void)removeAuthViewController;
-(void)shareAuthViewControllerDidFail:(id)shareAuthViewController;
-(void)shareAuthViewControllerDidSuccess:(id)shareAuthViewController;
-(void)shareAuthViewControllerDidCancel:(id)shareAuthViewController;
-(void)doAuth;
-(void)onPreEnterWechatDone;
-(void)openRankList;
-(void)cancelAllHandleAndReturn3rdApp;
-(void)cancelOpenRankList;
-(void)startAuth;
-(void)startHandleAppId:(id)anId bundleId:(id)anId2 info:(id)info;
-(void)dealloc;
@end

