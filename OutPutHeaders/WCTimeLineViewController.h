/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "INewMsgNotifyExt.h"
#import "WCSightViewExt.h"
#import "IWCSnsNewYearCtrlMgrExt.h"
#import "EGORefreshTableHeaderDelegate.h"
#import "WCTimeLineCellViewDelegate.h"
#import "WCListHeaderViewDelegate.h"
#import "WCCommentStrangerViewControllerDelegate.h"
#import "MMImagePickerManagerDelegate.h"
#import "WCTimeLineCommentCellViewDelegate.h"
#import "WCSetPermissionsViewControllerDelegate.h"
#import "WCPlainTextTipFullScreenViewDelegate.h"
#import "WCBarMessageWindowDelegate.h"
#import "UIAlertViewDelegate.h"
#import "WCAdvertiseActionFloatForABTestDelegate.h"
#import "NewYearActionSheetDelegate.h"
#import "tableViewDelegate.h"
#import "WCCommitViewAnimationDelegate.h"
#import "InputControllerDelegate.h"
#import "WCSnsRedEnvelopesCommitViewControllerDelegateV4.h"
#import "BaseEmoticonViewDelegate.h"
#import "WCTimeLineGreetingTipViewDelegate.h"
#import "WCSnsParticipateFullScreenViewDelegate.h"
#import "WXGestureDelegate.h"
#import "IMMFacebookMgrExt.h"
#import "WeChat-Structs.h"
#import "MMTipsViewControllerDelegate.h"
#import "IWCSnsNewYearFlowContrlMgr.h"
#import "WCContentItemViewExt.h"
#import "MMUIViewController.h"
#import "WCFacadeExt.h"
#import "WCImageFullScreeViewMgrExt.h"
#import "scrollViewDelegate.h"
#import "MMRefreshTableFooterDelegate.h"
#import "WCCommentDetailViewControllerFBDelegate.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"
#import "WCTimelineCellABTestTipExt.h"
#import "ILinkEventExt.h"
#import "WCActionSheetDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "ITranslateSnsMgrExt.h"

@class WCTimeLineFooterView, WCInputController, WCOperateFloatView, WXGesture, UIView, WCPlainTextTipFullScreenView, NSString, WCUserComment, UIButton, WCSnsParticipateFullScreenView, NSMutableDictionary, MMURLHandler, WCTimeLineHeaderView, EmoticonBoardView, WCListHeaderView, WCADPageWrap, NSMutableArray, WCDataItem, WCAdvertiseActionFloatView, UIImageView, WCAdvertiseActionFloatForABTest, MMUILabel, WCSnsRedEnvelopesIntroViewControllerV4, NSArray, MMTipsViewController, MMTableView, MMHeadImageView, WCBarMessageWindow;
@protocol WCTimeLineViewControllerDelegate;

@interface WCTimeLineViewController : MMUIViewController <tableViewDelegate, BaseEmoticonViewDelegate, WCCommitViewAnimationDelegate, WCSnsRedEnvelopesCommitViewControllerDelegateV4, WCTimeLineGreetingTipViewDelegate, IWCSnsNewYearCtrlMgrExt, IWCSnsNewYearFlowContrlMgr, WCSnsParticipateFullScreenViewDelegate, ITranslateSnsMgrExt, INewMsgNotifyExt, UITableViewDelegate, UITableViewDataSource, WCActionSheetDelegate, WCFacadeExt, WCTimeLineCellViewDelegate, EGORefreshTableHeaderDelegate, MMRefreshTableFooterDelegate, InputControllerDelegate, scrollViewDelegate, UIGestureRecognizerDelegate, WCListHeaderViewDelegate, MMTipsViewControllerDelegate, WCCommentStrangerViewControllerDelegate, WCCommentDetailViewControllerFBDelegate, WCTimeLineCommentCellViewDelegate, ILinkEventExt, WCSetPermissionsViewControllerDelegate, IMMFacebookMgrExt, MMImagePickerManagerDelegate, WCPlainTextTipFullScreenViewDelegate, WCSightViewExt, WXGestureDelegate, WCContentItemViewExt, WCImageFullScreeViewMgrExt, WCBarMessageWindowDelegate, WCTimelineCellABTestTipExt, UIAlertViewDelegate, WCAdvertiseActionFloatForABTestDelegate, NewYearActionSheetDelegate> {
	NSMutableDictionary* m_cellHeightCache;
	NSMutableDictionary* m_cellShowItemCache;
	NSMutableDictionary* m_hasPredownload;
	map<int, TimeLineSectionType, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, TimeLineSectionType> > > m_sectionIndexToType;
	MMTableView* m_tableView;
	WCTimeLineHeaderView* m_headRefreshView;
	WCTimeLineFooterView* m_footerView;
	WCListHeaderView* m_headerView;
	MMTipsViewController* m_introView;
	UIButton* m_messageTipView;
	MMHeadImageView* m_messageHeaderView;
	UIView* m_blackView;
	UIImageView* m_animationView;
	WCInputController* _inputController;
	WCOperateFloatView* m_floatOperateView;
	WCAdvertiseActionFloatView* m_advertiseActionFloatView;
	WCAdvertiseActionFloatForABTest* m_advertiseFloadForABTest;
	UIButton* m_advertiseActionBtn;
	WCPlainTextTipFullScreenView* m_plainTextFullScreenView;
	BOOL m_hasRefrashHead;
	BOOL m_isReflashingHead;
	BOOL m_isNoMoreData;
	BOOL m_isDelayStopFooterLoading;
	BOOL m_bTapHeaderView;
	BOOL m_bLongPressRightButton;
	BOOL m_hasSpeedyLoadView;
	BOOL m_shouldReloadData;
	BOOL m_shouldForbidRealodData;
	UIImageView* _inputView;
	EmoticonBoardView* _emoticonBoardView;
	UIButton* _expressionButton;
	MMUILabel* _remainWordCountLabel;
	WCDataItem* _inputDataItem;
	WCUserComment* _inputRefComment;
	int scrollCount;
	float m_fLastY;
	WCDataItem* _cacheDateItem;
	UIView* _animationView;
	NSArray* m_arrUploadFailItems;
	NSString* m_userName;
	id<WCTimeLineViewControllerDelegate> m_delegate;
	WXGesture* m_gesture;
	BOOL m_hasBeginTimeline;
	float m_preContentOffset;
	WCBarMessageWindow* m_barMessageWindow;
	BOOL m_forbidShowTip;
	BOOL m_needSetToTopCell;
	WCADPageWrap* _floatViewPageWrap;
	WCADPageWrap* _abTestPageWrap;
	BOOL _isReloadingData;
	NSMutableArray* _adReloadIndexPaths;
	NSMutableArray* _adInitIndexPaths;
	int m_commentWordLimit;
	NSMutableDictionary* _needReportViewId2AdInfo;
	NSMutableArray* m_arrWaitHateItemId;
	NSMutableArray* m_arrHiddenDataItem;
	NSMutableArray* m_arrWaitHiddenTipDataItem;
	BOOL m_hasNewPhotoWhenEnter;
	BOOL m_canLogAdContext;
	BOOL m_canLogDataList;
	float m_lastScreenShotContentOffset;
	WCSnsRedEnvelopesIntroViewControllerV4* m_snsRedEnvelopesViewControllerV4;
	UIView* _goldenCameraTipView;
	WCSnsParticipateFullScreenView* _participateFullScreenView;
	BOOL m_showCameraRedDot;
	MMURLHandler* m_urlHandler;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(readonly, assign, nonatomic) MMURLHandler* m_urlHandler;
@property(assign, nonatomic) BOOL m_showCameraRedDot;
@property(assign, nonatomic) BOOL m_hasNewPhotoWhenEnter;
@property(assign, nonatomic) BOOL m_hasRefrashHead;
@property(assign, nonatomic) __weak id<WCTimeLineViewControllerDelegate> m_delegate;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(id).cxx_construct;
-(void).cxx_destruct;
-(void)abTestViewHiddenWrap;
-(void)floatViewHiddenWrap;
-(void)calADCellYVisible:(BOOL*)visible centerVisible:(BOOL*)visible2 bottomVisible:(BOOL*)visible3 forRowAtIndexPath:(id)indexPath;
-(void)recordADCommentEndInfo:(id)info forRowAtIndexPath:(id)indexPath;
-(void)recordADCommentMiddleInfo:(id)info forRowAtIndexPath:(id)indexPath;
-(void)recordADCommentStartInfo:(id)info forRowAtIndexPath:(id)indexPath;
-(void)recordADBodyEndInfo:(id)info forRowAtIndexPath:(id)indexPath;
-(void)recordADBodyMiddleInfo:(id)info forRowAtIndexPath:(id)indexPath;
-(void)recordADBodyStartInfo:(id)info forRowAtIndexPath:(id)indexPath;
-(void)handleABTestTipClickEvent:(id)event actionItem:(id)item dataItem:(id)item3;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)showABTestAlert:(id)alert dataItem:(id)item;
-(void)tryLogABTestResult:(id)result;
-(void)refreshCacheForABTestTip:(id)abtestTip;
-(void)tryReportAdCell:(id)cell;
-(void)checkDBAutoRecover;
-(void)onPlayNewMsgNotify;
-(void)onClickTipsBtn:(unsigned)btn;
-(BOOL)shouldInteractivePop;
-(void)updateNetworkStatus;
-(void)onLinkClicked:(id)clicked backupUrl:(id)url withRect:(CGRect)rect;
-(void)onLinkClicked:(id)clicked withRect:(CGRect)rect;
-(void)onLinkClickedItem:(id)item url:(id)url backupUrl:(id)url3 withRect:(CGRect)rect;
-(void)handleUrl:(id)url backupUrl:(id)url2;
-(void)handleUrl:(id)url backupUrl:(id)url2 item:(id)item;
-(void)jumpToUserProfile:(id)userProfile Displayname:(id)displayname Scence:(unsigned long)scence userData:(id)data;
-(id)getAppIdFromUrl:(id)url;
-(void)onBindFacebookFinish:(unsigned long)finish;
-(void)gestureWillEndTransition:(id)gesture isCanceld:(BOOL)canceld;
-(void)onDismissViewController:(id)controller userName:(id)name;
-(void)onRestoreCommentView:(id)view ofDataItem:(id)dataItem;
-(void)onReloadCommentView:(id)view ofDataItem:(id)dataItem;
-(void)onReplyComment:(id)comment ofDataItem:(id)dataItem ofTouchedView:(id)touchedView;
-(void)onRestoreTimeLineCellView:(id)view;
-(void)cleanCellHeightCache:(id)cache;
-(void)onActionClearCellCacheAndRefreshCellView:(id)view;
-(void)onEditBlackList:(id)list;
-(id)getView;
-(void)onActionLocation:(id)location;
-(void)onTimeLineCellMoreMenu:(id)menu forScene:(unsigned)scene;
-(void)onTimeLineCellMoreMenu:(id)menu;
-(void)onShowDetailViewForDataItem:(id)dataItem;
-(void)onUpdateDataItem:(id)item oldHeight:(float)height newHeight:(float)height3;
-(void)onCommentDataItem:(id)item point:(CGPoint)point;
-(void)onAdvertiseAction:(id)action point:(CGPoint)point;
-(void)onAdActoin:(id)actoin;
-(void)onDontLikeWithChoose:(id)choose;
-(void)onDontLikeWithOtherReason:(id)otherReason QuestionExp:(id)exp;
-(void)onClickTipBtn:(id)btn;
-(void)onHideAdvertise:(id)advertise;
-(void)onViewAnimationDidHiden;
-(void)onViewAnimationWillHide;
-(void)onIKnowItBtnClicked;
-(void)onTouchDownLikeBtnOnFloatView;
-(void)onClickCommentBtnOnFloatView;
-(void)showComment:(id)comment refComment:(id)comment2 touchedView:(id)view;
-(float)totalHeightFromTopToSection:(unsigned)section;
-(unsigned)sectionIndexForDataItemWithTid:(id)tid;
-(id)visibleTimeLineCellViewWithTid:(id)tid;
-(void)showRewardTipWithItem:(id)item;
-(void)showContactInfo;
-(void)onReveiceWCMessage:(id)message;
-(void)onMessageUnReadCountChanged;
-(void)checkNewMessage;
-(BOOL)hasUnReadMessage;
-(void)shouldUpdateMessageButton:(id)button;
-(void)resetHeaderView;
-(void)MMRefreshTableFooterDidTriggerRefresh:(id)mmrefreshTableFooter;
-(void)postRewardRedEnvelopes:(id)envelopes;
-(void)showUploadOption:(id)option;
-(void)showPhotoAlert:(id)alert;
-(void)openParticipateRedEnvelepoesActivity;
-(void)closeParticipateRedEnvelepoesActivity;
-(void)newYearActionSheet:(id)sheet clickedButtonAtIndex:(int)index;
-(void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;
-(id)getViewController;
-(void)MMImagePickerManagerDidCancel:(id)mmimagePickerManager;
-(void)MMImagePickerManager:(id)manager didFinishPickingImageWithInfo:(id)info;
-(void)editShield:(id)shield forScene:(int)scene;
-(void)editShield:(id)shield;
-(void)editBlackList:(id)list forSource:(int)source;
-(void)showImagePicker:(int)picker;
-(void)openCommitViewController:(BOOL)controller arrImage:(id)image;
-(void)onBarTipClicked;
-(BOOL)scrollViewShouldScrollToTop:(id)scrollView;
-(void)refreshHeadForShowTip;
-(void)scrollViewDidEndDecelerating:(id)scrollView;
-(void)scrollViewDidEndDragging:(id)scrollView willDecelerate:(BOOL)decelerate;
-(void)scrollViewDidScroll:(id)scrollView;
-(void)scrollViewWillBeginDragging:(id)scrollView;
-(void)hideMenu;
-(void)logUserOpInfoAsScreenShot;
-(BOOL)egoRefreshTableHeaderDataSourceIsLoading:(id)loading;
-(void)egoRefreshTableHeaderDidTriggerRefresh:(id)egoRefreshTableHeader;
-(void)stopRefreshHeaderView;
-(void)refreshHead;
-(void)onWCGroupModMemberReturn:(BOOL)aReturn group:(id)group;
-(void)onNoMoreTimelineData;
-(void)onDataChangedWithAdded:(id)added andChanged:(id)changed andDeleted:(id)deleted;
-(void)onCommentReturn:(id)aReturn;
-(void)onLoadMore;
-(void)initData;
-(void)onMenuControllerWillHide:(id)onMenuController;
-(void)onMenuControllerDidHide:(id)onMenuController;
-(void)onMenuControllerWillShow:(id)onMenuController;
-(void)touchesCancelled_TableView:(id)view withEvent:(id)event;
-(void)touchesEnded_TableView:(id)view withEvent:(id)event;
-(void)touchesMoved_TableView:(id)view withEvent:(id)event;
-(void)touchesBegan_TableView:(id)view withEvent:(id)event;
-(void)tryResumeStatus;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(void)showDetailView:(id)view;
-(void)showDetailViewForDataItem:(id)dataItem;
-(void)onDeleteData;
-(void)onRestartUpload;
-(void)showMessageList;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didEndDisplayingCell:(id)cell forRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;
-(void)tryLogThumbImageLoadedEffiency:(id)effiency;
-(void)genRedHeartCell:(id)cell indexPath:(id)path;
-(void)genUploadFailCell:(id)cell indexPath:(id)path;
-(void)genABTestTipCell:(id)cell indexPath:(id)path;
-(void)genNormalCell:(id)cell indexPath:(id)path;
-(BOOL)GetIsLastCommentOrLikeCell:(id)cell RowIndex:(int)index;
-(BOOL)GetIsCommentCellRow:(id)row RowIndex:(int)index;
-(void)hideAlbumListLineViewInCell:(id)cell;
-(void)resetAlbumListLineViewsFrameInCell:(id)cell indexPath:(id)path;
-(float)getCellLineContentMarginCurOri;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)hideFloatView;
-(int)calcDataItemIndex:(int)index;
-(int)getFirstNormalItemIndex;
-(void)willDisshow;
-(void)onNetworkActivityStatusChanged;
-(void)willShow;
-(void)willDisappear;
-(void)didAppear;
-(void)initGestureRecognizer;
-(void)willAppear;
-(id)getNavigationRightButton:(id)button;
-(void)viewWillBePoped:(BOOL)view;
-(void)viewWillBePushed:(BOOL)view;
-(void)viewWillPush:(BOOL)view;
-(void)viewDidDisappear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)delayReload;
-(void)viewWillAppear:(BOOL)view;
-(void)didReceiveMemoryWarning;
-(void)dealloc;
-(BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)gestureRecognizer;
-(void)panned:(id)panned;
-(void)viewDidLoad;
-(id)getHongBaoBarButton;
-(void)resetRightBarItem;
-(void)viewDidLayoutSubviews;
-(void)adjustViewAndNavBarRect;
-(void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(unsigned)supportedInterfaceOrientations;
-(BOOL)shouldRotateToInterfaceOrientation:(int)interfaceOrientation;
-(void)resetStatus:(BOOL)status;
-(void)startLogBrowseInfo:(BOOL)info;
-(void)reportBrowseInfo;
-(void)onTimeLineViewReturn;
-(void)handleLongPressEx:(id)ex;
-(void)openWriteTextViewController;
-(void)OnFinishComment:(BOOL)comment;
-(void)resetRightButtonStatus;
-(void)reloadTableView;
-(void)didDisshow;
-(void)setToTopCell;
-(void)cacheInputText;
-(void)clearWCCache;
-(void)reloadDataWrap;
-(void)viewDidBePushed:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)showBarButton:(id)button;
-(id)init;
-(void)didCommitText:(id)text;
-(void)textViewTextDidChange;
-(void)updateWordCnt:(int)cnt;
-(void)onHideKeyboard;
-(void)MMGrowTextViewBeginEditing:(id)editing;
-(void)MMGrowTextViewHeightDidChanged:(id)mmgrowTextViewHeight;
-(void)keyboardWillHide;
-(void)keyboardDidHide;
-(void)keyboardWillShow;
-(void)updateContentOffset;
-(void)reloadExpressionButtonImage:(int)image;
-(void)onExpressionButtonClicked:(id)clicked;
-(void)ensureInitInputView;
-(void)initEmoticonView;
-(void)initInputToolView;
-(void)previewingContext:(id)context commitViewController:(id)controller;
-(id)previewingContext:(id)context viewControllerForLocation:(CGPoint)location;
-(void)onTranslateSnsChangedFromPhotoContent:(id)photoContent;
-(void)onViewSightOutFullScreen;
-(void)onViewSightInFullScreen;
-(void)refreshWholeView;
-(void)onWCContentItemViewOutFullScreen;
-(void)onWCContentItemViewInFullScreen;
-(void)onWCContentItemViewExposeMenu:(id)menu scene:(int)scene;
-(void)onWCContentItemViewMoreMenu:(id)menu sender:(id)sender;
-(void)animationDidStop:(id)animation finished:(id)finished context:(void*)context;
-(void)scrollViewDidEndScrollingAnimation:(id)scrollView;
-(void)commitAnimationWillStart:(id)commitAnimation;
-(void)animationDidEndRemainView:(id)animation hintDataItem:(id)item;
-(void)scrollTableViewToShowDataItem:(id)showDataItem;
-(void)showAnimationToImageView;
-(void)setAnimatedImageHidden:(BOOL)hidden withTimeLineCellView:(id)timeLineCellView;
-(void)setAnimatedImageHidden:(BOOL)hidden;
-(void)clearAnimationPropertiesProtection;
-(void)clearAnimationProperties;
-(void)onNotParticipateBtnClick;
-(void)onParticipateBtnClick;
-(void)closeParticipateFullScreenView;
-(void)tryToshowGoldenCameraTip;
-(void)onCloseGoldenCmarmaTip;
-(void)onNewYearSnsChangePostStatus:(BOOL)status;
-(void)onNewYearSnsChangeBrowseStatus:(BOOL)status bOpen:(BOOL)open scene:(BOOL)scene;
-(void)showGoldenCameraTipView;
-(void)updateTipViewWithTip:(id)tip;
-(void)onResumeScrollToTop;
-(void)onForbidScrollToTop;
-(void)dismissCurrentViewWithAnimatedV4:(BOOL)animatedV4;
-(void)onSendWCSnsRedEnvelopesCancelV4;
-(void)onSendWCSnsRedEnvelopesSuccessV4;
-(void)postRedEnvelopes:(int)envelopes;
@end

