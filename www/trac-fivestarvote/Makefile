# $FreeBSD$

PORTNAME=	fivestarvote
PORTVERSION=	0.1
PORTREVISION=	4
CATEGORIES=	www devel python
MASTER_SITES=	LOCAL/brooks
PKGNAMEPREFIX=	trac-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Five star plugin for voting on Trac resources

RUN_DEPENDS+=	tracd:${PORTSDIR}/www/trac

USES=		python:2
USE_PYTHON=	distutils autoplist

# Maintainter targets below this point

# Retrieve the latest version from SVN and package in a tarball.
.if defined(BOOTSTRAP)
FETCH_DEPENDS+=	svn:${PORTSDIR}/devel/subversion
do-fetch:
	${MKDIR} ${WRKDIR}
	cd ${WRKDIR} && \
	    svn export http://trac-hacks.org/svn/fivestarvoteplugin/0.11/ \
	    ${DISTNAME}
	cd ${WRKDIR} && tar cvf ${DISTDIR}/${DISTNAME}.tar.gz ${DISTNAME}
.endif

.include "${.CURDIR}/../../www/trac/plugin.mk"
.include <bsd.port.mk>
