# $FreeBSD$

PORTNAME=	rox-session
PORTVERSION=	0.40.0
PORTREVISION=	2
CATEGORIES=	x11-fm
MASTER_SITES=	SF/rox/ROX-Session/${PORTVERSION}/

MAINTAINER=	olgeni@FreeBSD.org
COMMENT=	Simple session manager for the ROX desktop

LICENSE=	GPLv2

LIB_DEPENDS=	libdbus-glib-1.so:${PORTSDIR}/devel/dbus-glib
RUN_DEPENDS=	${LOCALBASE}/bin/rox:${PORTSDIR}/x11-fm/rox-filer \
		${PYTHON_PKGNAMEPREFIX}roxlib>=0:${PORTSDIR}/devel/py-roxlib \
		${PYTHON_PKGNAMEPREFIX}dbus>=0:${PORTSDIR}/devel/py-dbus

WRKSRC=		${WRKDIR}/ROX-Session
DATADIR=	${PREFIX}/apps/ROX-Session

USES=		gettext-tools pkgconfig python
USE_GNOME=	gtk20 libxml2
USE_XORG=	x11 xext xtst xxf86vm

PORTDOCS=	Changes DBUS-API README

OPTIONS_DEFINE=	GDM DOCS
OPTIONS_SUB=	yes
GDM_DESC=	Install GDM login manager

SUB_FILES=	${PORTNAME} rox.desktop

GDM_RUN_DEPENDS=${LOCALBASE}/sbin/gdm:${PORTSDIR}/x11/gdm

post-patch:
	@${FIND} ${WRKSRC} -name "*.orig" -delete

do-build:
	@${PYTHON_CMD} -m compileall ${WRKSRC}
	@${PYTHON_CMD} -O -m compileall ${WRKSRC}
	@cd ${WRKSRC} && ./AppRun --compile
	@${MKDIR} ${WRKSRC}/Messages
	@cd ${WRKSRC}/src/po && ./dist

do-install:
	${INSTALL_SCRIPT} ${WRKDIR}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin
	@${MKDIR} ${STAGEDIR}${DATADIR}
	@cd ${WRKSRC} && ${CP} -r .DirIcon AppInfo.xml AppRun \
		Environment Login Messages Options.xml ROX-Session \
		ROX-Session.xml RunROX SetupPanel Styles browser images \
		*.py *.pyc *.pyo ${STAGEDIR}${DATADIR}

do-install-GDM-on:
	${INSTALL_DATA} ${WRKDIR}/rox.desktop ${STAGEDIR}${PREFIX}/share/applications

do-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
.for f in ${PORTDOCS}
	${INSTALL_DATA} ${WRKSRC}/Help/${f} ${STAGEDIR}${DOCSDIR}
.endfor

.include <bsd.port.mk>
