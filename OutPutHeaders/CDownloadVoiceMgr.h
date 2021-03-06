/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMObject.h"
#import "NotifyFromMainCtrlDelegate.h"

@class CMMDB, MMTimer, NSRecursiveLock;
@protocol DownloadVoiceDelegate;

@interface CDownloadVoiceMgr : MMObject <NotifyFromMainCtrlDelegate> {
	CMMDB* m_oMMDB;
	NSRecursiveLock* m_oLock;
	MMTimer* m_tmCheckDownloadQueue;
	unsigned long m_uiCurDownloadID;
	id<DownloadVoiceDelegate> m_delNotifyToReceiver;
	unsigned long m_uiQueueCount;
	BOOL m_bAddQueue;
	BOOL m_bDBError;
}
@property(assign, nonatomic) __weak id<DownloadVoiceDelegate> m_delNotifyToReceiver;
@property(retain, nonatomic) MMTimer* m_tmCheckDownloadQueue;
@property(retain, nonatomic) NSRecursiveLock* m_oLock;
@property(retain, nonatomic) CMMDB* m_oMMDB;
-(void).cxx_destruct;
-(void)NotifyFromMainCtrl:(unsigned long)mainCtrl MessageInfo:(id)info Event:(unsigned long)event;
-(void)AddToStat:(unsigned long)stat;
-(BOOL)WriteAudioFile:(id)file LocalID:(unsigned long)anId Offset:(unsigned long)offset Len:(unsigned long)len Data:(id)data;
-(void)HandleDownloadError:(id)error Happen:(unsigned long)happen;
-(void)PrepareForDownload:(id)download;
-(void)AddNewDownload:(id)download LocalID:(unsigned long)anId n64SvrID:(long long)anId3 VoiceLen:(unsigned long)len VoiceTime:(unsigned long)time CreateTime:(unsigned long)time6 EndFlag:(unsigned long)flag;
-(void)OnSyncDownload:(id)download LocalID:(unsigned long)anId n64SvrID:(long long)anId3 CreateTime:(unsigned long)time Xml:(id)xml Voice:(id)voice;
-(void)TimerCheckDownloadQueue;
-(void)DeleteMsg:(id)msg LocalID:(unsigned long)anId Happen:(unsigned long)happen;
-(void)UpdateRetryCount:(id)count;
-(BOOL)DeleteDownloadVoice:(id)voice LocalID:(unsigned long)anId VoiceLen:(unsigned long)len EndFlag:(unsigned long)flag;
-(BOOL)DeleteDownloadVoice:(id)voice LocalID:(unsigned long)anId;
-(BOOL)IsInDownloadQueue:(id)downloadQueue LocalID:(unsigned long)anId VoiceLen:(unsigned long)len EndFlag:(unsigned long)flag;
-(void)Stop;
-(void)Start;
-(void)InitDownloadMgr:(id)mgr Lock:(id)lock Delegate:(id)delegate;
-(void)dealloc;
-(id)init;
@end

