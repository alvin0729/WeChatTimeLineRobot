/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "UISearchBarDelegate.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"
#import "tableViewDelegate.h"
#import "NewContactsSearchPanelViewDelegate.h"
#import "MMSearchBarDisplayController.h"

@class NewContactsSearchPanelView, NSString, CBaseContact, MMTableView, NSMutableDictionary, NSMutableSet, NSMutableArray;
@protocol RoomContactSelectDelegate;

@interface RoomContactSelectViewController : MMSearchBarDisplayController <tableViewDelegate, UITableViewDelegate, UITableViewDataSource, UISearchBarDelegate, NewContactsSearchPanelViewDelegate> {
	MMTableView* m_tableView;
	NSMutableArray* m_arrRoomMembers;
	NSMutableArray* m_arrKeys;
	NSMutableDictionary* m_dicRoomMembers;
	CBaseContact* m_roomContact;
	NSMutableArray* m_arrFilterdFriends;
	NSMutableSet* m_setFilteredFriends;
	id<RoomContactSelectDelegate> m_delegate;
	NewContactsSearchPanelView* m_panelView;
	BOOL _m_bShowSelf;
	BOOL _m_bSortByTime;
	BOOL _m_bCustomMakeCell;
	BOOL _m_bEnableEdit;
	BOOL _m_bMultiSelect;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NewContactsSearchPanelView* m_panelView;
@property(assign, nonatomic) BOOL m_bMultiSelect;
@property(assign, nonatomic) BOOL m_bEnableEdit;
@property(assign, nonatomic) BOOL m_bCustomMakeCell;
@property(assign, nonatomic) BOOL m_bSortByTime;
@property(assign, nonatomic) BOOL m_bShowSelf;
@property(assign, nonatomic) __weak id<RoomContactSelectDelegate> m_delegate;
@property(retain, nonatomic) CBaseContact* m_roomContact;
-(void).cxx_destruct;
-(void)didSearchViewTableSelect:(id)select;
-(float)heightForSearchViewTable:(id)searchViewTable;
-(id)cellForSearchViewTable:(id)searchViewTable index:(id)index;
-(void)doSearch:(id)search Pre:(BOOL)pre;
-(void)didDeleteLastWithKey:(id)key;
-(void)didClickImageAtIndex:(unsigned long)index withKey:(id)key;
-(void)searchBarSearchButtonClicked:(id)clicked;
-(void)searchBar:(id)bar textDidChange:(id)text;
-(void)searchBarTextDidBeginEditing:(id)searchBarText;
-(void)doSearch:(id)search;
-(int)tableView:(id)view sectionForSectionIndexTitle:(id)sectionIndexTitle atIndex:(int)index;
-(id)sectionIndexTitlesForTableView:(id)tableView;
-(id)tableView:(id)view titleForHeaderInSection:(int)section;
-(id)tableView:(id)view viewForHeaderInSection:(int)section;
-(float)tableView:(id)view heightForHeaderInSection:(int)section;
-(void)tableView:(id)view commitEditingStyle:(int)style forRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view editingStyleForRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(void)didSelectContact:(id)contact;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(void)makeCell:(id)cell contact:(id)contact;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)onCancel:(id)cancel;
-(void)OnDataChange;
-(void)dealloc;
-(id)init;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)initView;
-(void)initSearchBar;
-(void)initTableView;
-(id)getMemberList;
-(void)reloadMemberListAndView;
-(void)reloadView;
-(void)initData;
-(id)getContactWith:(id)with;
-(void)addContact:(id)contact;
-(id)addSectionKey:(id)key;
-(id)GetCompareStrByContact:(id)contact;
@end

