

#pragma mark  全新3.0

//
//#ifndef QDCommonDefine_h
//#define QDCommonDefine_h

typedef NS_ENUM(NSInteger, QDTabBarIndex) {
    QDTabBarIndexFirstHome  = 0,
    QDTabBarIndexInvestHome = 1,
//    QDTabBarIndexCreditHome = 2,
    QDTabBarIndexStoreHome  = 2,
    QDTabBarIndexMineHome   = 3
};

#pragma mark 投资列表

//白名单雷西
typedef NS_ENUM(NSInteger, QDIWhiteType) {
    QDIWhiteType_0=0,
    QDIWhiteType_1=1,
    QDIWhiteType_2=2
};

//请求项目状态
typedef NS_ENUM(NSInteger, QDIProjectListState) {
    QDIProjectListState_NoDone=1,//未完成
    QDIProjectListState_Done=2 //完成
};

//项目状态
typedef NS_ENUM(NSInteger, QDProjectStatus) {
    QDProjectComplite=1,     //1：完成
    QDProjectFull,          //2：满标
    QDProjectWillBegin,    //3：预热
    QDProjectBegin ,       //4：投标
    QDProjectEnd,         //5：结束
};


//2.0.1修改用户bool状态
//有（是），无（否），未获知。
typedef NS_ENUM(NSInteger, QDBoolState) {
    QDBoolStateNone=0,
    QDBoolStateTure = 1,
    QDBoolStateFalse = 2,
};



// 导航栏整体风格 (包括返回按钮和navigationBar)
typedef NS_ENUM(NSInteger, QDNavStyle) {
    
    QDNavStyleRed=0,
    QDNavStyleWhite=1,
    QDNavStyleBlue=2,
    QDNavStyleBlueBg=3//投资详情
};


typedef NS_ENUM(NSInteger, QDBackItemStyle) {
    
    QDBackItemStyleRed=0,
    QDBackItemStyleWhite=1,
    QDBackItemStyleBlue=2,
    QDBackItemStyleNo = 3,
    
};

//项目列表排序
typedef NS_ENUM(NSInteger, QDSortItemType) {
    QDSortItemType_Default=0,
    QDSortItemType_Progress=1,
    QDSortItemType_Duration=2,
    QDSortItemType_Interest = 3
    
};

//排序类型
typedef NS_ENUM(NSInteger, QDSortType) {
//    QDSortType_Default=0,
    QDSortType_Up=1,
    QDSortType_Down=2
};


//此处业务跳转逻辑只适合局部界面变量设置，不适合全局变量的参数，命名标准 进入页面＋功能
typedef NS_ENUM(NSInteger, QDBusinessPageLine) {
    QDBusinessPageLine_SetLoginPass=3,      //设置登录密码
    QDBusinessPageLine_ForgetLoginPass=4,      //找回登录密码
    QDBusinessPageLine_SHInCash=6,   //摇钱宝，存入
    QDBusinessPageLine_SHOutCash=7   //摇钱宝，取出
};

typedef NS_ENUM(NSInteger, QDProductDetailsType) {
    
    QDProductDetailsPhone     = 1,//话费
    QDProductDetailsOilCard   = 2,//加油卡
    QDProductDetailsOrdinary  = 3,//普通商品
    QDProductDetailsCoupon    = 4,//卡券
    QDProductDetailsPrivilege = 5,//新手/特权/摇钱宝
    QDProductDetailsWelfare   = 6//福利商品
};

typedef NS_ENUM(NSInteger, QDCommonAdCodeType) {
    
    QDAdCodeHomeTop                  = 1,//首页顶部广告
    QDAdCodeHomeBottomStore          = 2,//首页底部闪惠广告
    QDAdCodeStoreHome                = 3,//闪惠首页
    QDAdCodeInvestListTop            = 4,//投资列表顶部广告
    QDAdCodeInvestSuccessBottom      = 5,//投资成功后展示的广告(底部)
    QDAdCodeInvestSuccessBounced     = 7,//投资交易成功页_浮层广告(弹框)
    QDAdCodeInvestSuccessIcon        = 8,//投资交易成功页_图标广告(底部小图标)
    QDAdCodeHomeBottomHighYield      = 9,//首页底部高收益活动广告
    QDAdCodeSplashSreen              = 10,//启动广告
    QDAdCodePhoneCharge              = 11,//话费充值
    QDAdCodeOilCardCharge            = 12,//加油卡充值
    QDAdCodeHomeShakeMoney           = 13,//首页摇钱宝
    QDAdCodeInvestHomeShakeMoney     = 14,//投资首页摇钱宝
    QDAdCodeInvestDetailsNoCoupon    = 15,//投资详情，高收益项目，没有高收益券
    QDAdCodeStorePaySuccess          = 17,//闪惠支付成功页面banner
    QDAdCodeStorePaySuccessSmallIcon = 18,//闪惠支付成功页面小图标
    QDAdCodeChargeCenter             = 19,//充值中心，公共广告位
    QDAdCodeHomeNewUserInvest        = 20,//首页新手投资入口
    QDAdCodeHomeRenQiInvest          = 21,//首页人气投资入口
    QDAdCodeHomeCredit               = 22,//首页授信入口
    QDAdCodeShakeMoneyCashInSucccess = 23,//摇钱宝存入成功
    QDAdCodeStorePaySuccessBigIcon   = 24,//闪惠支付成功页面大图标
    QDAdCodeHomeShowFullScreenAD     = 25,//首页一次性弹出全屏广告
    QDAdCodeHomeGetCoupon            = 26,//首页领券弹窗广告
    QDAdCodeInvestGetCoupon          = 27,//投资领券弹窗广告
    QDAdCodeStoreGetCoupon           = 28,//闪惠领券弹窗广告
    QDAdCodeCreditHome               = 29,//信用首页
    QDAdCodeReserver1                = 30,//预留广告位1
    QDAdCodeReserver2                = 31,//预留广告位2
    QDAdCodeShakeMoneyOut            = 32,//摇钱宝取出详情广告
    QDAdCodeShakeMoneyIn             = 33,//摇钱宝存入详情广告
    QDAdCodeInvestCoupon             = 34,//投资优惠券，无优惠券广告位
    QDAdCodeCreditHomeFirstShow      = 35,//授信模块首次点击启动广告
    QDAdCodeShakeMoneyHomeShow       = 36,//摇钱宝首页-弹出广告位
    QDAdCodeCreditNotEnough          = 37,//闪惠该买商品-信用额度不足
    QDAdCodeInvestCreditNotEnough    = 38,//闪惠该买商品-投资信用额度不足
    QDAdCodeAppIndexHeaderIcons      = 42,//42 app首页顶部横向按钮广告位
    QDAdCodeInvestSuccessPayGuide    = 43,//43 投资支付成功后数字密码/指纹密码指引
    QDAdCodeStorePaySuccessPayGuide  = 44,//44 闪惠支付成功后数字密码/指纹密码指引
    QDAdCodeInvestHeaderIcons        = 45,//45 投资首页顶部横向按钮广告位
    QDAdCodeHomePagePopupAd          = 47//47 App首页弹窗广告
};

typedef NS_ENUM(NSInteger, QDShareType) {
    QDShareTypeInvestDetails = 1,//投资详情--自带弹框
    QDShareTypeStoreDetails  = 2,//商品详情--自带弹框
    QDShareTypeADid          = 3,//广告位id
    QDShareTypeShakeMoneyHome= 4,//摇钱宝首页--自带弹框
    QDShareTypeShakeMoney    = 5,//摇一摇成功后的分享按钮(可加息)
    QDShareTypeH5            = 6,//H5分享+++++
    QDShareTypeShakeMoneyShare  = 7//摇一摇成功后的分享按钮(不可加息)
};


typedef NS_ENUM(NSInteger, QDADJumpType) {
    QDADJumpTypeStoreHome            = 1,//信用惠商品首页(原生)
    QDADJumpTypeInvestHome           = 2,//信用惠商品首页(原生)
    QDADJumpTypeH5                   = 3,//分享页(H5)
    QDADJumpTypeOrdinary             = 4,//普通广告位(不跳转)
    QDADJumpTypeRedEnvelope          = 5,//我的红包(原生)
    QDADJumpTypeInvestProjectDetails = 6,//投资项目详情(原生)
    QDADJumpTypeShakeMoney           = 7,//摇钱宝(原生)
    QDADJumpTypeProductDetails       = 8,//商品详情（原生）
    QDADJumpTypeShareActivex         = 9,//分享控件
    QDADJumpTypeCreditHome           = 10,//授信首页
    QDADJumpTypeH5New                = 11,//跳转h5+++++
    QDADJumpTypeLogin                = 12,//登录界面+++++
    QDADJumpTypeRealNameAuthPopUp    = 13,//实名认证弹窗+++++
    QDADJumpTypeRealNameAuth         = 14,//实名认证+++++
    QDADJumpTypeShakeMoneyDeposit    = 15,//摇钱宝存入界面+++++
    QDADJumpTypeInverstList          = 16,//投资列表页(定期投资)+++++
    QDADJumpTypeShakeMoneyHomeH5     = 17,//摇钱宝首页广告跳转H5
    QDADJumpTypePortraitAuth         = 19,//肖像认证
    QDADJumpTypeCheckPayPassword     = 20,//验证支付密码
    QDADJumpTypeBankCardList         = 21,//银行卡列表
    QDADJumpTypeRegister             = 22,//注册页面
    //QDADJumpTypeAddBankCard          = 23,//添加银行卡
    QDADJumpTypeAPPHome              = 24,//App首页(原生)
    QDADJumpTypeNewUserZone          = 25,//新手专区(原生)
    QDADJumpTypeAppointmentInvest    = 26,//预约投资(原生)
    QDADJumpTypeRegularProjectList   = 27,//定期项目列表(原生)
    QDADJumpTypeChargeCenterPhone    = 28,//充值中心-话费充值(原生)
    QDADJumpTypeChargeCenterOil      = 29,//充值中心-加油卡充值(原生)
    QDADJumpTypeOrderDetails         = 30,//订单详情(原生)
    QDADJumpTypeSafeCenter           = 31,//账户安全中心(原生)
    QDADJumpTypeMyCoupon             = 32,//我的优惠券(原生)
    QDADJumpTypeContact              = 33,//选择联系人
    QDADJumpTypeMyGiftCard           = 34,//我的礼品卡(原生)
    QDADJumpTypeMyFavority           = 35,//我的关注(原生)
    QDADJumpTypeMyOrders             = 36,//我的消费(原生)
    QDADJumpTypeMyInvest             = 37,//我的投资(原生)
    QDADJumpTypeShareActivexReadH5   = 38,//分享控件(H5页面点击弹出)
    QDADJumpTypeGotoModifyMobileVC   = 39,//去修改手机号
    //QDADJumpTypeGoBackH5Entrance     = 40,//返回跳入h5的入口
    QDADJumpTypeGotoPayControls      = 41,//支付控件
    QDADJumpTypeCommonPayKit         = 42,//公共支付组件
    QDADJumpTypePayCodeCenter        = 43,// 账户安全中心_支付密


};

typedef NS_ENUM(NSInteger, QDGlobalH5JumpType) {
    QDGlobalH5JumpTypeStoreHome            = 1, //信用惠商品首页(原生)
    QDGlobalH5JumpTypeInvestHome           = 2, //投资首页 (原生)
    QDGlobalH5JumpTypeShareH5              = 3,//分享页(H5)++++
    QDGlobalH5JumpTypeOrdinary             = 4,//普通广告位(不跳转)++++
    QDGlobalH5JumpTypeRedEnvelope          = 5, //我的红包(原生)
    QDGlobalH5JumpTypeInvestProjectDetails = 6, //投资项目详情(原生)
    QDGlobalH5JumpTypeShakeMoney           = 7, //摇钱宝(原生)
    QDGlobalH5JumpTypeProductDetails       = 8, //商品详情（原生）
    QDGlobalH5JumpTypeShareActivex         = 9,//分享控件++++
    QDGlobalH5JumpTypeCreditHome           = 10,//授信首页(原生)
    QDGlobalH5JumpTypeH5                   = 11,//跳转h5
    QDGlobalH5JumpTypeLogin                = 12,//登录界面
    QDGlobalH5JumpTypeRealNameAuthPopUp    = 13,//实名认证弹窗
    QDGlobalH5JumpTypeRealNameAuth         = 14,//实名认证
    QDGlobalH5JumpTypeShakeMoneyDeposit    = 15,//摇钱宝存入界面+++++
    QDGlobalH5JumpTypeInverstList          = 16,//投资列表页(定期投资)+++++
    QDGlobalH5JumpTypeShowAlter            = 17,//弹窗(包含确定)
    QDGlobalH5JumpTypeBackModifyMobileVC   = 18,//修改手机号后确定返回
    QDGlobalH5JumpTypePortraitAuth         = 19,//肖像认证
    QDGlobalH5JumpTypeCheckPayPassword     = 20,//验证支付密码
    QDGlobalH5JumpTypeBankCardList         = 21,//银行卡列表
    QDGlobalH5JumpTypeRegister             = 22,//注册页面
    QDGlobalH5JumpTypeAddBankCard          = 23,//添加银行卡
    QDGlobalH5JumpTypeAPPHome              = 24,//App首页(原生)
    QDGlobalH5JumpTypeNewUserZone          = 25,//新手专区(原生)
    QDGlobalH5JumpTypeAppointmentInvest    = 26,//预约投资(原生)
    QDGlobalH5JumpTypeRegularProjectList   = 27,//定期项目列表(原生)
    QDGlobalH5JumpTypeChargeCenterPhone    = 28,//充值中心-话费充值(原生)
    QDGlobalH5JumpTypeChargeCenterOil      = 29,//充值中心-加油卡充值(原生)
    QDGlobalH5JumpTypeOrderDetails         = 30,//订单详情(原生)
    QDGlobalH5JumpTypeSafeCenter           = 31,//账户安全中心(原生)
    QDGlobalH5JumpTypeMyCoupon             = 32,//我的优惠券(原生)
    QDGlobalH5JumpTypeContact              = 33,//选择联系人
    QDGlobalH5JumpTypeMyGiftCard           = 34,//我的礼品卡(原生)
    QDGlobalH5JumpTypeMyFavority           = 35,//我的关注(原生)
    QDGlobalH5JumpTypeMyOrders             = 36,//我的消费(原生)
    QDGlobalH5JumpTypeMyInvest             = 37,//我的投资(原生)
    QDGlobalH5JumpTypeShareActivexReadH5   = 38,//分享控件(H5页面点击弹出)
    QDGlobalH5JumpTypeGotoModifyMobileVC   = 39,//去修改手机号
    QDGlobalH5JumpTypeGoBackH5Entrance     = 40,//返回跳入h5的入口
    QDGlobalH5JumpTypeGotoPayControls      = 41,//支付控件
    QDGlobalH5JumpTypeCommonPayControls    = 42,//公共支付控件
    QDGlobalH5JumpTypeAccountCenterPayPwd  = 43,//账户安全中心_支付密码
    QDGlobalH5JumpTypeInvestProductDetails = 44,//投资项目进度详情
    QDGlobalH5JumpTypeStoreOrderDetails    = 45,//闪惠订单详情
    QDGlobalH5JumpTypeWeddingPresentDetails = 46,//红包详情页面提现中
    QDGlobalH5JumpTypeStoreHomeNotBar       = 47,//信用惠商品首页(非主页-原生)没有底部的tabbar
    QDGlobalH5JumpTypeInvestHomeNotBar      = 48,//投资首页 (非主页-原生)没有底部的tabbar
    QDGlobalH5JumpTypeFeedBack              = 49,//意见反馈
    QDGlobalH5JumpTypeAddCard               = 50,//绑卡
    QDGlobalH5JumpTypeOldInvestListDataQuery = 51,//投资交易记录列表-旧数据
    QDGlobalH5JumpTypeOldStoreListDataQuery  = 52,//闪惠交易记录列表-旧数据
    QDGlobalH5JumpTypeFailureRedEnvelopes    = 53,//失效红包
    QDGlobalH5JumpTypeShowSetPayPwdAlter     = 54,//设置支付密码弹窗

};

typedef NS_ENUM(NSInteger, QDGModuleType) {
    QDGModuleTypeVehicleInsurance = 1,
    QDGModuleTypeEmployeeLoan = 2,
    QDGModuleTypeCashLoan = 3,
};

typedef NS_ENUM(NSInteger, QDFaceRecognitionState) {
    QDFaceRecognitionState_Success     = 0,//认证成功
    QDFaceRecognitionState_Failure     = 1,//认证失败
    QDFaceRecognitionState_OutCount    = 2 //超过次数
};

typedef NS_ENUM(NSInteger, QDMyOrderType) {
    
    QDOrderType_All         = 0,//全部
    QDOrderType_UnPay       = 1,//待付款
    QDOrderType_UnGetGoods  = 2,//待收货
    QDOrderType_AfterSale   = 3 //退款退货
};

typedef NS_ENUM(NSInteger, QDMyPOrderHandlerType) {
    
    QDMyPOrderHandlerType_Cancel         = 0,//取消订单
    QDMyPOrderHandlerType_Pay            = 1,//立即付款
    QDMyPOrderHandlerType_Delete         = 2, //删除订单
    QDMyPOrderHandlerType_Enter          = 3 //确认收货
};

typedef NS_ENUM(NSInteger, QDMyCOrderHandlerType) {
    
    QDMyCOrderHandlerType_Progress      = 1,//售后进度
    QDMyCOrderHandlerType_Request       = 2,//申请售后
    QDMyCOrderHandlerType_Enter         = 3, //确认收货
};

typedef NS_ENUM(NSInteger, QDPayWayType) {
    
    QDPayWay_Nomal        = 0,//默认
    QDPayWay_Invest       = 1,//投资支付
    QDPayWay_CreditAll    = 2,//信用支付 全部
    QDPayWay_CreditPeriodization = 3 //信用支付 分期
};

typedef NS_ENUM(NSInteger, QDPayPwdType) {
    
    QDPayPwdTypeOrigin        = 0,//支付密码
    QDPayPwdTypeDigital       = 1,//数字密码
    QDPayPwdTypeTouchID       = 2,//指纹密码
    
};

/** 5.15全局公告类型*/
typedef enum : NSUInteger {
    AppHomeNoticesHomePageType = 1,     //    1=APP首页
    AppHomeNoticesShakeMoneyType,       //    2=摇钱宝首页
    AppHomeNoticesWalletBalanceType,    //    3=钱包余额首页
} QDAppHomeNoticesType;

typedef enum : NSUInteger {
    ShakeMoneyAccess_In = 1,
    ShakeMoneyAccess_Out = 2
} ShakeMoneyAccessType;

typedef NS_ENUM(NSInteger, QDShakeMoneyCheckState) {
    QDShakeMoneyCheckState_YES = 1,//开启
    QDShakeMoneyCheckState_NO  = 2,//不开启
};

typedef NS_ENUM(NSInteger, QDCOmmonPayBusinessType) {
    QDCOmmonPayBusinessType_CreditEarlyRepayment = 1,//员工贷提前还款
    QDCOmmonPayBusinessType_UnarySnatch = 2,//一元夺宝
};



#pragma mark - WeakSelf&StrongSelf
#define WeakSelf(weakSelf)  __weak __typeof(&*self)weakSelf = self;
#define StrongSelf(strongSelf)  __strong __typeof(&*self)strongSelf = self;
typedef void(^H5CallBackBlock)(id param);

#define KInvestListProgressSortTag  1111111111
#define KInvestListDurationSortTag  1111111112
#define KInvestListInterestSortTag  1111111113


#define KCommonListSize  10
#define KCommonDefaultIndex 1

#define QD_Short_timeoutInterval 30
#define QD_Long_timeoutInterval 65


#pragma mark 通知相关
#define KCTBPreHotFinishedNtf                       @"KCTBPreHotFinishedNtf"
//#define KRealNameAuthenticationSuccessNotification  @"KRealNameAuthenticationSuccessNotification" //实名认证成功
//#define KRealNameAuthenticationFailedNotification   @"KRealNameAuthenticationFailedNotification"  //实名认证失败
//#define KFaceRecognitionSuccessNotification         @"KFaceRecognitionSuccessNotification"        //肖像认证成功
//#define KFaceRecognitionFailedNotification          @"KFaceRecognitionFailedNotification"         //肖像认证失败
//#define KHasFaceRecognitionNotification             @"KHasFaceRecognitionNotification"            //已经肖像认证
//#define kAccountHasBeenKickOffNotification          @"kAccountHasBeenKickOffNotification"         //账户已经被踢掉
//#define kNetworkErrorNotification                   @"kNetworkErrorNotification"                  //网络异常
//#define kAddCardSuccessNotification                 @"kAddCardSuccessNotification"                //添加成功

#pragma mark 颜色相关
//全局背景色
#define KBgColor  [UIColor colorWithRed:236/255.0 green:235/255.0 blue:243/255.0 alpha:1]

#define KDEFAULTBG_COLOR [UIColor colorWithHexString:@"efeff4"]

//投资列表
//排序,正常状态
#define KInvestListNormalColor  [UIColor colorWithRed:57/255.0 green:57/255.0 blue:57/255.0 alpha:1]

//选中状态
#define KInvestListSelectedColor  [UIColor colorWithHexString:@"#6eb4ff"]

#define KInvestListDefaultSortTag   1111111110
#define KInvestListProgressSortTag  1111111111
#define KInvestListDurationSortTag  1111111112
#define KInvestListInterestSortTag  1111111113


#define KCouponSelectedNtf @"KCouponSelectedNtf"
#define KIdentityAuthenticationNotification @"QDIdentityAuthenticationNotification"

#pragma mark storyboard
#define KInvestDetailStoryBoard [UIStoryboard storyboardWithName:@"QDInvestDetail" bundle:nil]

#define QDLoginNotification @"login"//钱端登入通知
#define QDLogoutNotification @"QDLogoutNotification"//钱端退出登录通知
#define QDQuitCropNotification @"QDLogoutCorpNotification"//钱端退出企业通知

#define QDNetworkErrorTips      @"网络不给力，请稍后再试"

#define kQDURLDESKEY            @"8nj5WmUh"
#define KPASSWORDDESKEY         @"Q!~8mY)x"
#define KENCRYPTEDSTRINGDESKEY  @"7mj4OmIa"

/**
 *  全局H5跳原生
 */
#define kAppGlobalPrefix    @"appglobal"
/**
 *  支付控件版本
 */
#define kPayVersion @"1.0.0"


