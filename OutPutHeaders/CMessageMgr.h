/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "IClearDataMgrExt.h"
#import "MMKernelExt.h"
#import "MMService.h"
#import "PBMessageObserverDelegate.h"
#import "MMService.h"
#import "IMsgExt.h"
#import "IEmoticonExt.h"
#import "IVideoExt.h"
#import "MessageObserverDelegate.h"
#import "IMessageWrapImgExt.h"
#import "IAudioToMessageExt.h"
#import "MessageWrapImgDelegate.h"
#import "UploadImageCDNMgrDelegate.h"
#import "OpenDownloadCDNMgrDelegate.h"

@class UploadVideoCDNMgr, OpenUploadCDNMgr, OpenDownloadCDNMgr, DownloadImageMgr, NSDate, NSString, CEmoticonDownloadMgr, CMessageDB, CEmoticonUploadMgr, ThumbDownloadMgr, RecordUploadCDNMgr, MessagePatternCacheMgr, OpenDownloadMgr, NSObject, UploadImageMgr, RecordDownloadCDNMgr, CUploadVideoMgr, DownloadVideoCDNMgr, CDownloadVideoMgr, DownloadImageCDNMgr, OpenUploadMgr, ShortVideoDownloadMgr, NSMutableDictionary, UploadImageCDNMgr;
@protocol OS_dispatch_semaphore;

@interface CMessageMgr : MMService <IMessageWrapImgExt, IClearDataMgrExt, MessageWrapImgDelegate, MessageObserverDelegate, MMService, IAudioToMessageExt, IVideoExt, IEmoticonExt, PBMessageObserverDelegate, MMKernelExt, IMsgExt, UploadImageCDNMgrDelegate, OpenDownloadCDNMgrDelegate> {
	CMessageDB* m_oMsgDB;
	CUploadVideoMgr* m_oUploadVideoMgr;
	CDownloadVideoMgr* m_oDownloadVideoMgr;
	CEmoticonUploadMgr* m_oEmoticonUploadMgr;
	CEmoticonDownloadMgr* m_oEmoticonDownloadMgr;
	BOOL m_bCheckQueue;
	OpenUploadMgr* m_oOpenUploadMgr;
	OpenDownloadMgr* m_oOpenDownloadMgr;
	MessagePatternCacheMgr* m_oMessagePatternMgr;
	UploadImageMgr* m_oUploadImageMgr;
	DownloadImageMgr* m_oDownloadImageMgr;
	UploadImageCDNMgr* m_oUploadImageCdnMgr;
	DownloadImageCDNMgr* m_oDownloadImageCdnMgr;
	ThumbDownloadMgr* m_oThumbDownloadMgr;
	UploadVideoCDNMgr* m_oUploadVideoCdnMgr;
	DownloadVideoCDNMgr* m_oDownloadVideoCdnMgr;
	ShortVideoDownloadMgr* m_oShortVideoDownloadMgr;
	OpenUploadCDNMgr* m_oOpenUploadCDNMgr;
	OpenDownloadCDNMgr* m_oOpenDownloadCDNMgr;
	RecordUploadCDNMgr* m_oRecordUploadCDNMgr;
	RecordDownloadCDNMgr* m_oRecordDownloadCDNMgr;
	NSObject<OS_dispatch_semaphore>* _semaphore;
	NSDate* m_dateLastNotifySentFail;
	NSMutableDictionary* m_dicSentFailMsg;
	BOOL _m_bIsMacHelperHasNewChanges;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) BOOL m_bIsMacHelperHasNewChanges;
+(id)GetPathOfOpenUploadCDNFile;
+(id)GetPathOfOpenUploadFile;
-(void).cxx_destruct;
-(void)onDownOpenMsgModMsg:(id)msg MsgWrap:(id)wrap BitSet:(unsigned long)set;
-(void)onUploadImageCheckQQ;
-(void)onUploadImageModMsg:(id)msg MsgWrap:(id)wrap;
-(void)onUploadImageModMsgByBitSet:(id)set MsgWrap:(id)wrap BitSet:(unsigned long)set3;
-(void)onModMsgByBitSet:(id)set MsgWrap:(id)wrap BitSet:(unsigned long)set3;
-(id)onGetMsg:(id)msg LocalID:(unsigned long)anId Wrap:(id)wrap;
-(void)onGetBigImageErrorWithWrap:(id)wrap;
-(void)onGetBigImageResultWithWrap:(id)wrap image:(id)image imageData:(id)data isSaveImgOK:(BOOL*)ok;
-(void)onUploadImageRequestWithWrap:(id)wrap;
-(void)enterBackground;
-(void)enterForeground;
-(void)reSendAllMsgFromNotificationDone;
-(id)getSentFailMsgs;
-(void)OnModMsg:(id)msg MsgWrap:(id)wrap;
-(void)onAuthOK;
-(id)getSemaphore;
-(BOOL)IsRecordMsgDownloading:(id)downloading;
-(void)StopDownloadRecordMsg:(id)msg;
-(void)StartDownloadByRecordData:(id)data DataId:(id)anId;
-(void)StartDownloadByRecordMsg:(id)msg;
-(void)StopUploadRecordMsgByUsername:(id)username;
-(void)StopUploadRecordMsg:(id)msg;
-(void)ResendRecordMsg:(id)msg MsgWrap:(id)wrap;
-(void)AddRecordMsg:(id)msg MsgWrap:(id)wrap;
-(void)StartDownloadAppAttach:(id)attach MsgWrap:(id)wrap AttachId:(id)anId AttachDataSize:(unsigned long)size AttachFileExt:(id)ext;
-(BOOL)InAppAttachDownloading:(id)appAttachDownloading MsgWrap:(id)wrap;
-(BOOL)InAppAttachDownloading:(id)appAttachDownloading MsgWrap:(id)wrap AttachId:(id)anId;
-(BOOL)RollbackTransaction;
-(BOOL)CommitTransaction;
-(BOOL)BeginTransaction;
-(id)DBContext;
-(void)onDiskStorageWarningCleanedSize:(unsigned*)size CacheMask:(unsigned long)mask;
-(void)onDiskStorageWarningCleanedSize:(unsigned*)size subQueue:(id)queue;
-(void)onDiskStorageWarningCleanedSize:(unsigned*)size;
-(void)addAutoCleanTask;
-(unsigned long)GetDownloadThumbStatus:(id)status;
-(BOOL)StartDownloadThumb:(id)thumb;
-(unsigned long)GetUploadPercent:(id)percent;
-(unsigned long)GetDownloadImageTotalLen:(id)len;
-(unsigned long)GetDownloadImagePartLen:(id)len;
-(void)StopDownloadImage:(id)image;
-(void)StartDownloadImage:(id)image HD:(BOOL)hd AutoDownload:(BOOL)download;
-(id)GetAppMsgList:(id)list FromID:(unsigned long)anId CreateTime:(unsigned long)time Limit:(unsigned long)limit;
-(id)GetAppMsgList:(id)list AfterID:(unsigned long)anId CreateTime:(unsigned long)time Limit:(unsigned long)limit;
-(unsigned long)GetImgOrVideoMsgCount:(id)count;
-(unsigned long)GetImgOrVideoMsgCount:(id)count FromID:(unsigned long)anId CreateTime:(unsigned long)time;
-(id)GetImgOrVideoOrAppNextMsg:(id)msg FromID:(unsigned long)anId CreateTime:(unsigned long)time Limit:(unsigned long)limit;
-(id)GetImgOrVideoLastMsg:(id)msg;
-(id)GetImgOrVideoOrAppLastMsg:(id)msg FromID:(unsigned long)anId CreateTime:(unsigned long)time Limit:(unsigned long)limit;
-(id)GetImgAndVideoMsgList:(id)list;
-(id)GetImgMsgList:(id)list;
-(unsigned long)GetImgMsgCount:(id)count;
-(unsigned long)GetImgMsgCount:(id)count FromID:(unsigned long)anId CreateTime:(unsigned long)time;
-(id)GetImgLastMsg:(id)msg;
-(id)GetImgLastMsg:(id)msg FromID:(unsigned long)anId CreateTime:(unsigned long)time;
-(id)GetImgNextMsg:(id)msg FromID:(unsigned long)anId CreateTime:(unsigned long)time;
-(void)onServiceClearData;
-(BOOL)onServiceMemoryWarning;
-(void)onServiceInit;
-(void)CheckQQPwd;
-(void)UpdateVideoMsg:(id)msg;
-(void)OnErrorByReceiver:(id)receiver ErrNo:(int)no;
-(void)OnErrorBySender:(id)sender ErrNo:(int)no;
-(void)OnMessageSentBySender:(id)sender;
-(void)OnAddMessageByReceiver:(id)receiver;
-(void)OnAddMessageBySender:(id)sender;
-(void)MessageReturn:(unsigned long)aReturn MessageInfo:(id)info Event:(unsigned long)event;
-(void)MessageReturn:(id)aReturn Event:(unsigned long)event;
-(void)HandleSvrCmd:(id)cmd MsgWrap:(id)wrap;
-(void)DelMsgPatten:(id)patten MsgWrap:(id)wrap;
-(id)GetLastMsgToUsr:(id)usr;
-(id)GetLastMsgFromUsr:(id)usr;
-(void)ModVoipMsgStatus:(id)status MsgWrap:(id)wrap;
-(void)CheckQueue;
-(id)GetRealChatName:(id)name;
-(void)StopDownloadAppAttach:(id)attach MsgWrap:(id)wrap;
-(void)StartDownloadAppAttach:(id)attach MsgWrap:(id)wrap;
-(void)AddAppMsg:(id)msg MsgWrap:(id)wrap Data:(id)data Scene:(unsigned long)scene;
-(void)StartUploadAppMsg:(id)msg MsgWrap:(id)wrap Scene:(unsigned long)scene;
-(void)SetGetLocationEnd:(id)end MsgWrap:(id)wrap;
-(void)UpdateEmoticonMsg:(id)msg;
-(void)SetEmoticonGameEnd:(id)end MsgWrap:(id)wrap;
-(void)StartDownloadEmoticon:(id)emoticon MsgWrap:(id)wrap;
-(void)AddEmoticonMsg:(id)msg MsgWrap:(id)wrap;
-(BOOL)AddBackupMsg:(id)msg MsgWrap:(id)wrap;
-(BOOL)backupMsgSrvIDExit:(id)exit MsgWrap:(id)wrap;
-(id)backupGetMsg:(id)msg n64SvrID:(long long)anId;
-(void)AddLocalMsg:(id)msg MsgWrap:(id)wrap fixTime:(BOOL)time NewMsgArriveNotify:(BOOL)notify;
-(void)AddLocalMsg:(id)msg MsgWrap:(id)wrap fixTime:(BOOL)time NewMsgArriveNotify:(BOOL)notify Unique:(BOOL)unique;
-(void)AddLocalMsg:(id)msg MsgWrap:(id)wrap;
-(void)AddUniqueLocalMsg:(id)msg MsgWrap:(id)wrap;
-(void)AddPimMsg:(id)msg MsgWrap:(id)wrap;
-(void)DropChatTable:(id)table;
-(void)AddFloatBottle:(id)bottle MsgWrap:(id)wrap;
-(void)StopDownloadVideoByChatName:(id)name;
-(void)StopDownloadVideo:(id)video MsgWrap:(id)wrap;
-(void)StartDownloadVideo:(id)video MsgWrap:(id)wrap;
-(BOOL)InternalStartDownloadShortVideo:(id)video AutoDownload:(BOOL)download;
-(void)StartDownloadShortVideo:(id)video;
-(void)StopUploadVideoByChatName:(id)name;
-(void)StopUploadVideo:(id)video MsgWrap:(id)wrap;
-(void)StartUploadVideo:(id)video MsgWrap:(id)wrap;
-(void)AddShortVideoLocalMsg:(id)msg ToUsr:(id)usr VideoInfo:(id)info MsgType:(unsigned long)type;
-(void)AddVideoMsg:(id)msg ToUsr:(id)usr VideoInfo:(id)info MsgType:(unsigned long)type;
-(void)ResendSightMsg:(id)msg MsgWrap:(id)wrap;
-(void)AddShortVideoMsg:(id)msg ToUsr:(id)usr VideoInfo:(id)info;
-(void)AddVideoMsg:(id)msg ToUsr:(id)usr VideoInfo:(id)info;
-(void)UpdateMessage:(id)message MsgWrap:(id)wrap;
-(void)UpdateVoiceMessage:(id)message MsgWrap:(id)wrap;
-(void)UpdateVoiceStatus:(id)status LocalID:(unsigned long)anId DownloadStatus:(unsigned long)status3;
-(id)GetRevokeMsgBySvrId:(long long)anId;
-(unsigned long)GetMesCount:(id)count MesType:(unsigned long)type;
-(unsigned long)GetAllMesCount:(id)count;
-(unsigned long)GetUnReadCountInHello:(id)hello;
-(unsigned long)GetCountInHello:(id)hello;
-(unsigned long)GetUnReadCount:(id)count;
-(void)DelMsg:(id)msg MsgWrap:(id)wrap;
-(void)DelMsg:(id)msg MsgList:(id)list DelAll:(BOOL)all;
-(void)ClearUnreadForSync:(id)sync CreateTime:(unsigned long)time;
-(void)ClearUnRead:(id)read FromID:(unsigned long)anId ToID:(unsigned long)anId3;
-(unsigned long)GetSayHelloStatus:(id)status LocalID:(unsigned long)anId;
-(BOOL)SetSayHelloStatus:(id)status LocalID:(unsigned long)anId Status:(unsigned long)status3;
-(void)AddHelloMsgList:(id)list MsgList:(id)list2;
-(void)AddHelloMsg:(id)msg MsgWrap:(id)wrap HelloUser:(id)user OpCode:(unsigned long)code DES:(unsigned long)des checkCreateTime:(BOOL)time status:(unsigned long)status;
-(BOOL)ClearHelloUnRead:(id)read HelloUser:(id)user;
-(void)DelHelloMsg:(id)msg HelloUser:(id)user;
-(id)GetHelloMsg:(id)msg HelloUser:(id)user Limit:(unsigned long)limit OnlyTo:(BOOL)to;
-(id)GetHelloUsers:(id)users Limit:(unsigned long)limit OnlyUnread:(BOOL)unread;
-(void)CheckMessageStatus:(id)status Msg:(id)msg;
-(id)GetFirstUnreadMsg:(id)msg;
-(id)GetLastInsertMsg:(id)msg;
-(id)GetLastMsg:(id)msg;
-(unsigned long)GetTextMsgCount:(id)count FromID:(unsigned long)anId ToID:(unsigned long)anId3;
-(id)GetTextMsg:(id)msg FromID:(unsigned long)anId ToID:(unsigned long)anId3;
-(id)GetTextMsg:(id)msg FromID:(unsigned long)anId Limit:(unsigned long)limit LeftCount:(unsigned*)count LeftUnreadCount:(unsigned*)count5;
-(id)GetMsg:(id)msg BizMsgClientID:(id)anId;
-(id)GetMsg:(id)msg n64SvrID:(long long)anId;
-(id)GetMsg:(id)msg LocalID:(unsigned long)anId;
-(id)QueryMsgFromChat:(id)chat queryText:(id)text FromID:(unsigned long)anId FromCreateTime:(unsigned long)createTime Limit:(unsigned long)limit LeftCount:(unsigned*)count;
-(id)GetDownMsgByCreateTime:(id)time FromID:(unsigned long)anId FromCreateTime:(unsigned long)createTime Limit:(unsigned long)limit LeftCount:(unsigned*)count;
-(id)GetMsgByCreateTime:(id)time FromID:(unsigned long)anId FromCreateTime:(unsigned long)createTime Limit:(unsigned long)limit LeftCount:(unsigned*)count FromSequence:(unsigned long)sequence;
-(id)GetMsgByCreateTime:(id)time FromID:(unsigned long)anId FromCreateTime:(unsigned long)createTime Limit:(unsigned long)limit LeftCount:(unsigned*)count;
-(id)GetFirstMsgByCreateTime:(id)time FromID:(unsigned long)anId FromCreateTime:(unsigned long)createTime Limit:(unsigned long)limit LeftCount:(unsigned*)count;
-(id)GetLastMsgByCreateTime:(id)time FromID:(unsigned long)anId FromCreateTime:(unsigned long)createTime Limit:(unsigned long)limit LeftCount:(unsigned*)count;
-(id)GetDownMsg:(id)msg FromID:(unsigned long)anId Limit:(unsigned long)limit LeftCount:(unsigned*)count LeftUnreadCount:(unsigned*)count5;
-(id)GetMsg:(id)msg FromID:(unsigned long)anId Limit:(unsigned long)limit LeftCount:(unsigned*)count LeftUnreadCount:(unsigned*)count5;
-(void)AddMsgPattern:(id)pattern;
-(void)HandleMsgList:(id)list MsgList:(id)list2;
-(void)ResendMsg:(id)msg MsgWrap:(id)wrap;
-(void)ModMsgByBitSet:(id)set MsgWrap:(id)wrap BitSet:(unsigned long)set3;
-(void)ModMsgWithoutNotify:(id)notify MsgWrap:(id)wrap;
-(void)ModMsg:(id)msg MsgWrap:(id)wrap;
-(void)AddMsg:(id)msg MsgWrap:(id)wrap;
-(void)onRevokeMsg:(id)msg;
-(void)onRevokeMsgCgiReturn:(id)aReturn;
-(BOOL)RevokeMsg:(id)msg MsgWrap:(id)wrap Counter:(unsigned long)counter;
-(void)AsyncOnCheckQQ;
-(void)AsyncOnModMsg:(id)msg MsgWrap:(id)wrap;
-(BOOL)IsVideoMsgdDownloadIng:(id)ing;
-(BOOL)IsVideoMsgUploadIng:(id)ing;
-(void)InitMsgMgr:(id)mgr Lock:(id)lock;
-(BOOL)SaveMesVoice:(id)voice MsgWrap:(id)wrap;
-(BOOL)SaveMsgThumb:(id)thumb MsgWrap:(id)wrap;
-(BOOL)SaveMesImg:(id)img MsgWrap:(id)wrap;
-(void)dealloc;
-(id)init;
-(void)MainThreadNotifyToExt:(id)ext;
-(void)AsyncOnPushMsg:(id)msg;
-(void)AsyncOnDelMsg:(id)msg MsgWrap:(id)wrap;
-(void)AsyncOnSendVoiceError:(id)error MsgWrap:(id)wrap ErroNO:(unsigned long)no;
-(void)AsyncOnUnReadChange:(id)change;
-(void)AsyncOnDelMsg:(id)msg DelAll:(BOOL)all;
-(void)AsyncOnDelMsg:(id)msg;
-(void)AsyncOnMsgNotAddDBSession:(id)session MsgList:(id)list;
-(void)AsyncOnSpecialSession:(id)session MsgList:(id)list;
-(void)AsyncOnNotAddDBMessage:(id)message MsgWrap:(id)wrap;
-(void)AsyncOnAddMsgForSession:(id)session MsgWrap:(id)wrap NewMsgArriveNotify:(BOOL)notify;
-(void)AsyncOnAddMsgForSession:(id)session MsgWrap:(id)wrap;
-(void)AsyncOnAddMsgListForSession:(id)session NotifyUsrName:(id)name;
-(void)AsyncOnAddMsg:(id)msg MsgWrap:(id)wrap;
-(void)AsyncOnPreAddMsg:(id)msg MsgWrap:(id)wrap;
-(void)UpdateVideoStatus:(id)status;
-(BOOL)IsRecordMsgUploading:(id)uploading;
-(BOOL)IsImageMsgUploadIng:(id)ing;
-(id)escapeKeywordForQueryString:(id)queryString;
-(BOOL)isContact:(id)contact ConfirmToQueryString:(id)queryString;
-(void)BackGroundAddHelloMsg:(id)msg;
@end

